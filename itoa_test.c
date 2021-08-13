/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:36:14 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 20:56:44 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(int n, const char *expected)
{
	char	*created;
	int		diff;

	created = ft_itoa(n);
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

char	*itoa_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 7);
	result[0] = do_test(42, "42");
	result[1] = do_test(374621, "374621");
	result[2] = do_test(-223876, "-223876");
	result[3] = do_test(2147483647, "2147483647");
	result[4] = do_test(-2147483648, "-2147483648");
	result[5] = do_test(0, "0");
	result[6] = '\0';
	return (result);
}
