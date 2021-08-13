/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:15:38 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 16:19:13 by tsekiguc         ###   ########.fr       */
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
		if (ft_isascii(c))
			return (OK);
		else
			return (NG);
	}
	else
	{
		if (!ft_isascii(c))
			return (OK);
		else
			return (NG);
	}
}

char	*isascii_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 8);
	result[0] = do_test(TRUE, 'a');
	result[1] = do_test(TRUE, 'Y');
	result[2] = do_test(TRUE, 'Z');
	result[3] = do_test(TRUE, '!');
	result[4] = do_test(TRUE, '9');
	result[5] = do_test(FALSE, -1);
	result[6] = do_test(FALSE, 128);
	result[7] = '\0';
	return (result);
}
