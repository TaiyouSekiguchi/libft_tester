/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:36:07 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 13:32:46 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char const *s, unsigned int start, size_t len, char const *expected)
{
	char	*created;
	int		diff;

	created = ft_substr(s, start, len);
	diff = 0;
	if (!(created == NULL && expected == NULL))
		diff = strcmp(created, expected);
	free(created);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*substr_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 8);
	result[0] = do_test("Stay hungry, stay foolish", 5, 6, "hungry");
	result[1] = do_test("The Hitchhiker's Guide to the Galaxy", 17, 5, "Guide");
	result[2] = do_test("sikgi@@@kaig	gk aTADk kfdai))dkgcka}!@#	 !", 30, 3, "kgc");
	result[3] = do_test("Stay hungry, stay foolish", 0, 100, "Stay hungry, stay foolish");
	result[4] = do_test("The Hitchhiker's Guide to the Galaxy", 17, 0, "");
	result[5] = do_test("sikgi@@@kaig	gk aTADk kfdai))dkgcka}!@#	 !", 100, 100, "");
	result[6] = do_test(NULL, 100, 100, NULL);
	result[7] = '\0';
	return (result);
}
