/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:28:35 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/12 23:00:26 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void my_toupper(unsigned int index, char *c)
{
	unsigned int	a;

	a = index;
	if (*c >= 'a' && *c <= 'z')
		*c -= 'a' - 'A';
}

static char	do_test(char *s, void (*f)(unsigned int, char*), char const *expected)
{
	int		diff;

	ft_striteri(s, (*f));
#ifdef PRINT
	printf("s        is %s\n", s);
	printf("expected is %s\n", expected);
#endif
	diff = 0;
	if (!(s == NULL && expected == NULL))
		diff = strcmp(s, expected);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*striteri_test(void)
{
	char	*result;
	void	(*func)(unsigned int, char*);

	func = my_toupper;
	result = (char *)malloc(sizeof(char) * 6);

	char	s1[] = "abcdefg";
	result[0] = do_test(s1, (*func), "ABCDEFG");
	char	s2[] = "98afid8776&1idk";
	result[1] = do_test(s2, (*func), "98AFID8776&1IDK");
	char	s3[] = "don't panic!!";
	result[2] = do_test(s3, (*func), "DON'T PANIC!!");
	result[3] = do_test(NULL, (*func), NULL);
	result[4] = do_test("func is null", NULL, "func is null");
	result[5] = '\0';
	return (result);
}
