/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:16:57 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/01 18:13:07 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char *dst1, char *dst2, const char *src, size_t dstsize)
{
	size_t	ret1;
	size_t	ret2;
	int		diff;

	ret1 = ft_strlcat(dst1, src, dstsize);
	ret2 = strlcat(dst2, src, dstsize);
	diff = strcmp(dst1, dst2);
#ifdef PRINT
	printf("created  is  [%zu] %s\n", ret1, dst1);
	printf("expected is  [%zu] %s\n", ret2, dst2);
	printf("diff     is  %d\n", diff);
#endif
	if (ret1 == ret2 && diff == 0)
		return ('o');
	else
		return ('x');
}

char	*strlcat_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 12);
	if (result == NULL)
		return (NULL);

#ifdef PRINT
	printf("********** strlcat test **********\n");
#endif

	char	dst_a1[20] = "12345";
	char	dst_b1[20] = "12345";
	char	src1[] = "67890";
	result[0] = do_test(dst_a1, dst_b1, src1, 20);

	char	dst_a2[8] = "12345";
	char	dst_b2[8] = "12345";
	char	src2[] = "67890";
	result[1] = do_test(dst_a2, dst_b2, src2, 8);

	char	dst_a3[6] = "12345";
	char	dst_b3[6] = "12345";
	char	src3[] = "67890";
	result[2] = do_test(dst_a3, dst_b3, src3, 6);

	char	dst_a4[6] = "12345";
	char	dst_b4[6] = "12345";
	char	src4[] = "67890";
	result[3] = do_test(dst_a4, dst_b4, src4, 5);

	char	dst_a5[6] = "12345";
	char	dst_b5[6] = "12345";
	char	src5[] = "67890";
	result[4] = do_test(dst_a5, dst_b5, src5, 4);

	char	dst_a6[6] = "12345";
	char	dst_b6[6] = "12345";
	char	src6[] = "67890";
	result[5] = do_test(dst_a6, dst_b6, src6, 3);

	char	dst_a7[6] = "12345";
	char	dst_b7[6] = "12345";
	char	src7[] = "67890";
	result[6] = do_test(dst_a7, dst_b7, src7, 2);

	char	dst_a8[6] = "12345";
	char	dst_b8[6] = "12345";
	char	src8[] = "67890";
	result[7] = do_test(dst_a8, dst_b8, src8, 1);

	char	dst_a9[6] = "12345";
	char	dst_b9[6] = "12345";
	char	src9[] = "67890";
	result[8] = do_test(dst_a9, dst_b9, src9, 0);

	char	dst_a10[20] = "yuu yuu";
	char	dst_b10[20] = "yuu yuu";
	char	src10[] = "hakusho";
	result[9] = do_test(dst_a10, dst_b10, src10, sizeof(dst_a10));

	char	dst_a11[30] = "nigeru ha haji daga";
	char	dst_b11[30] = "nigeru ha haji daga";
	char	src11[] = "yaku ni tatu";
	result[10] = do_test(dst_a11, dst_b11, src11, sizeof(dst_a11));

	result[11] = '\0';

	return (result);
}
