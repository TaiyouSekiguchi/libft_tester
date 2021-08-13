/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 23:28:08 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 23:45:26 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(const void *s1, const void *s2, size_t n)
{
	if (ft_memcmp(s1, s2, n) == memcmp(s1, s2, n))
		return ('o');
	else
		return ('x');
}

char	*memcmp_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 18);

	char	s1[] = "Brute you too";
	result[0] = do_test(s1, s1, sizeof(s1));
	result[1] = do_test(s1, s1, 100);
	result[2] = do_test(s1, s1, 0);
	result[3] = do_test(s1, s1, 3);

	char	s2[] = "Marvin!!Come here!!";
	char	s3[] = "Marvin!!Be quiet!!";
	result[3] = do_test(s2, s3, sizeof(s2));
	result[4] = do_test(s2, s3, sizeof(s3));
	result[5] = do_test(s2, s3, 5);
	result[6] = do_test(s2, s3, 8);
	result[7] = do_test(s2, s3, 9);
	result[8] = do_test(s2, s3, 0);
	result[9] = do_test("Yoru ni kakeru", "Yoru ni aruku", 7);
	result[10] = do_test("Legend of Zelda:Brethe of the wild", "Legend of Zelda:Majora's Mask", 11);
	result[11] = do_test("Legend of Zelda:Brethe of the wild", "Legend of Zelda:Majora's Mask", 15);
	result[12] = do_test("Legend of Zelda:Brethe of the wild", "Legend of Zelda:Majora's Mask", 100);

	int	num1 = 42;
	int	num2 = 42;
	result[13] = do_test(&num1, &num2, sizeof(num1));
	num1 = 42;
	num2 = 33;
	result[14] = do_test(&num1, &num2, sizeof(num1));
	num1 = -687394;
	num2 = 857768;;
	result[15] = do_test(&num1, &num2, sizeof(num1));

	int	array1[] = {22, -5736, 8873, 283790, -44837, 0, 5574, 42};
	int	array2[] = {22, -5736, 8873, 283790, -44837, 0, 5574, 42};
	result[16] = do_test(array1, array2, sizeof(array1));
	
	int	array3[] = {3345, -99182, 67638, 3345, -1111, 67839};
	int	array4[] = {3345, -99182, 67638, 2222, 37, 9802};
	result[16] = do_test(array3, array4, sizeof(array3));
	result[17] = '\0';
	return (result);
}
