/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:20:10 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 16:22:02 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(int c)
{
	int	b;

	b = c;
	c = ft_tolower(c);
	b = tolower(b);
	if (c == b)
		return ('o');
	else
		return ('x');
}

char	*tolower_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 8);
	result[0] = do_test('a');
	result[1] = do_test('t');
	result[2] = do_test('S');
	result[3] = do_test('P');
	result[4] = do_test('7');
	result[5] = do_test(' ');
	result[6] = do_test('$');
	result[7] = '\0';
	return (result);
}
