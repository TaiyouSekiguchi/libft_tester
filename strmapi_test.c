/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:46:45 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/12 23:00:49 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char my_toupper(unsigned int index, char c)
{
	unsigned int	a;

	a = index;
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

static char	do_test(char const *s, char (*f)(unsigned int, char), char const *expected)
{
	char	*created;
	int		diff;

	created = ft_strmapi(s, (*f));
#ifdef PRINT
	printf("created  is %s\n", created);
	printf("expected is %s\n", expected);
#endif
	diff = 0;
	if (!(created == NULL && expected == NULL))
		diff = strcmp(created, expected);
	free(created);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*strmapi_test(void)
{
	char	*result;
	char	(*func)(unsigned int, char);

	func = my_toupper;
	result = (char *)malloc(sizeof(char) * 6);
	result[0] = do_test("abcdefg", (*func), "ABCDEFG");
	result[1] = do_test("98afid8776&1idk", (*func), "98AFID8776&1IDK");
	result[2] = do_test("don't panic!!", (*func), "DON'T PANIC!!");
	result[3] = do_test(NULL, (*func), NULL);
	result[4] = do_test("are you ok?", NULL, NULL);
	result[5] = '\0';
	return (result);
}
