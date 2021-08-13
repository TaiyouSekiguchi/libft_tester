/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:20:55 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:12:21 by tsekiguc         ###   ########.fr       */
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
		if (ft_isdigit(c))
			return (OK);
		else
			return (NG);
	}
	else
	{
		if (!ft_isdigit(c))
			return (OK);
		else
			return (NG);
	}
}

char	*isdigit_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 6);
	result[0] = do_test(TRUE, '1');
	result[1] = do_test(TRUE, '0');
	result[2] = do_test(TRUE, '7');
	result[3] = do_test(FALSE, '#');
	result[4] = do_test(FALSE, 'a');
	result[5] = '\0';
	return (result);
}
