/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:29:40 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:12:57 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(int c, size_t len)
{
	void	*a;
	void	*b;
	int		diff;

	a = malloc(sizeof(unsigned char) * (len));
	if (a == NULL)
		return ('\0');
	b = malloc(sizeof(unsigned char) * (len));
	if (b == NULL)
		return ('\0');

	ft_memset(a, c, len);
	memset(b, c, len);
	diff = memcmp(a, b, len);
	free(a);
	free(b);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*memset_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 4);
	result[0] = do_test('@', 10);
	result[1] = do_test('!', 20);
	result[2] = do_test('0', 0);
	result[3] = '\0';
	return (result);
}
