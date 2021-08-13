/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:55:31 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 19:14:17 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(const char *src, size_t dstsize)
{
	char	*dst1;
	char	*dst2;
	size_t	ret1;
	size_t	ret2;
	int		diff;

	dst1 = (char *)malloc(sizeof(char) * dstsize);
	if (dst1 == NULL)
		return ('\0');
	dst2 = (char *)malloc(sizeof(char) * dstsize);
	if (dst2 == NULL)
		return ('\0');
	
	ret1 = ft_strlcpy(dst1, src, dstsize);
	ret2 = strlcpy(dst2, src, dstsize);
	diff = strcmp(dst1, dst2);
	free(dst1);
	free(dst2);
	if (ret1 == ret2 && diff == 0)
		return ('o');
	else
		return ('x');
}

char	*strlcpy_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 7);
	result[0] = do_test("Fushigidane", 20);
	result[1] = do_test("Hitokage", 9);
	result[2] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		", 30);
	result[3] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		", 0);
	result[4] = do_test("", 10);
	result[5] = do_test("", 0);
	result[6] = '\0';
	return (result);
}
