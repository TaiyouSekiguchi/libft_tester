/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:18:44 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 11:32:31 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void	my_free(void *a, void *b)
{
	free(a);
	free(b);
}

static char	do_test(const char *s1)
{
	int		diff;
	char	*a;
	char	*b;

	a = ft_strdup(s1);
	b = strdup(s1);
	diff = memcmp(a, b, strlen(s1) + 1);
	my_free(a, b);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*strdup_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 5);
	result[0] = do_test("livin' on a prayer");
	result[1] = do_test("The Hitchhiker's Guide to the Galaxy");
	result[2] = do_test("sikgi@@@kaig	gk aTADk kfdai))dkgcka}!@#	 !");
	result[3] = do_test("");
	result[4] = '\0';
	return (result);
}
