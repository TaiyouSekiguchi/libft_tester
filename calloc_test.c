/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:03:29 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 11:12:07 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void	my_free(void *a, void *b)
{
	free(a);
	free(b);
}

static char	do_test(size_t count, size_t size)
{
	int		diff;
	void	*a;
	void	*b;

	a = ft_calloc(count, size);
	b = calloc(count, size);
	diff = memcmp(a, b, count * size);
	my_free(a, b);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*calloc_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 4);
	result[0] = do_test(100, sizeof(int));
	result[1] = do_test(42, sizeof(unsigned char));
	result[2] = do_test(333, sizeof(long));
	result[3] = '\0';
	return (result);
}
