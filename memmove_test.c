/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:14:32 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:56:09 by tsekiguc         ###   ########.fr       */
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

	ft_memmove(a, src, n);
	memmove(b, src, n);
	diff = memcmp(a, b, n);
	free(a);
	free(b);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

static char	do_test_overrap(const void *src, size_t n, int start, const void *expect)
{
	int		diff;
	void	*tmp;

	tmp = (void *)src;
	ft_memmove(tmp + start, src, n);
	diff = memcmp(src, expect, n);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*memmove_test(void)
{
	char	*result;
	char	*str;
	int		num;
	int		array[] = {33, 42, 100, 9999, 1031, -339382, 222222222};

	result = (char *)malloc(sizeof(char) * 12);
	str = strdup("The Catcher in the Rye");
	result[0] = do_test(str, strlen(str) + 1);
	free(str);
	str = strdup("Ghost in the shell");
	result[1] = do_test(str, strlen(str) + 1);
	free(str);
	str = strdup("Ma  	r vi    n 		!!");
	result[2] = do_test(str, strlen(str) + 1);
	free(str);
	str = strdup("0123456789");
	result[3] = do_test(str, 5);
	free(str);
	str = strdup("0123456789");
	result[4] = do_test(str, 0);
	free(str);
	
	num = 42;
	result[5] = do_test(&num, sizeof(num));
	num = 99999999;
	result[6] = do_test(&num, sizeof(num));
	num = -274672;
	result[7] = do_test(&num, sizeof(num));
	result[8] = do_test(&array, sizeof(array));
	
	str = strdup("01234567890123456789");
	result[9] = do_test_overrap(str, 5, 3, "01201234890123456789");
	free(str);
	str = strdup("01234567890123456789");
	result[10] = do_test_overrap(str, 7, 5, "01234012345623456789");
	free(str);

	result[11] = '\0';
	return (result);
}
