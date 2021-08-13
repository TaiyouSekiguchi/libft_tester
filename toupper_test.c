/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:03:13 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 16:13:59 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(int c)
{
	int	b;

	b = c;
	c = ft_toupper(c);
	b = toupper(b);
	if (c == b)
		return ('o');
	else
		return ('x');
}

char	*toupper_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 8);
	result[0] = do_test('a');
	result[1] = do_test('t');
	result[2] = do_test('R');
	result[3] = do_test('I');
	result[4] = do_test('7');
	result[5] = do_test(' ');
	result[6] = do_test('$');
	result[7] = '\0';
	return (result);
}
