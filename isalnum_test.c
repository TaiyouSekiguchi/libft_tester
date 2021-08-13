/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:20:55 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:11:57 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(int flag, int c)
{
	char	OK;
	char	NG;

	OK = 'o';
	NG = 'x';
	if (flag == TRUE)
	{
		if (ft_isalnum(c))
			return (OK);
		else
			return (NG);
	}
	else
	{
		if (!ft_isalnum(c))
			return (OK);
		else
			return (NG);
	}
}

char	*isalnum_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 11);
	result[0] = do_test(TRUE, '1');
	result[1] = do_test(TRUE, '0');
	result[2] = do_test(TRUE, '7');
	result[3] = do_test(TRUE, 'x');
	result[4] = do_test(TRUE, 'A');
	result[5] = do_test(TRUE, 'r');
	result[6] = do_test(TRUE, 'T');
	result[7] = do_test(FALSE, '@');
	result[8] = do_test(FALSE, '!');
	result[9] = do_test(FALSE, ' ');
	result[10] = '\0';
	return (result);
}
