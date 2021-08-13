/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:56:16 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 14:13:40 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char const *s1, char const *set, char const *expected)
{
	char	*created;
	int		diff;

	created = ft_strtrim(s1, set);
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

char	*strtrim_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 9);
#ifdef PRINT
	printf("********** ft_strtrim check **********\n");
#endif
	result[0] = do_test("@@@###42Tokyo***&&&&", "@#*&", "42Tokyo");
	result[1] = do_test("DON'T PANIC!!", "D!", "ON'T PANIC");
	result[2] = do_test("	  	  	dddisNice trimitkdls		  ", "	 distkdl", "Nice trim");
	result[3] = do_test("not trim", "*&&^", "not trim");
	result[4] = do_test("not trim", "", "not trim");
	result[5] = do_test("set is NULL", NULL, NULL);
	result[6] = do_test(NULL, "s1 is NULL", NULL);
	result[7] = do_test(NULL, NULL, NULL);
	result[8] = '\0';
	return (result);
}
