/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:29:40 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:12:46 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(const void *src, size_t n)
{
	void	*a;
	void	*b;
	int		diff;

	a = malloc(sizeof(unsigned char) * n);
	if (a == NULL)
		return ('\0');
	b = malloc(sizeof(unsigned char) * n);
	if (b == NULL)
		return ('\0');

	ft_memcpy(a, src, n);
	memcpy(b, src, n);
	diff = memcmp(a, b, n);
	free(a);
	free(b);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*memcpy_test(void)
{
	char	*result;
	char	*str;
	int		num;
	int		array[] = {33, 42, 100, 9999, 1031, -339382, 222222222};

	result = (char *)malloc(sizeof(char) * 5);
	str = strdup("The Catcher in the Rye");
	result[0] = do_test(str, strlen(str) + 1);
	free(str);
	str = strdup("Ghost in the shell");
	result[1] = do_test(str, strlen(str) + 1);
	free(str);
	num = 42;
	result[2] = do_test(&num, sizeof(num));
	num = 0;
	result[3] = do_test(&num, sizeof(num));
	result[4] = do_test(&array, sizeof(array)/sizeof(array[0]));
	
	result[5] = '\0';
	return (result);
}
