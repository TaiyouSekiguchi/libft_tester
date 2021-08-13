/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:37:33 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 23:03:30 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char *s1, char *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == strncmp(s1, s2, n))
		return ('o');
	else
		return ('x');
}

char	*strncmp_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 13);

	char	s1[] = "Welcome to 42Tokyo";
	char	s2[] = "Welcome to 42Tokyo";
	result[0] = do_test(s1, s2, sizeof(s1));
	result[1] = do_test(s1, s2, 10);
	result[2] = do_test(s1, s2, 30);

	char	s3[] = "Marvin!!Come here!!";
	char	s4[] = "Marvin!!Be quiet!!";
	result[3] = do_test(s3, s4, sizeof(s3));
	result[4] = do_test(s3, s4, sizeof(s4));
	result[5] = do_test(s3, s4, 5);
	result[6] = do_test(s3, s4, 8);
	result[7] = do_test(s3, s4, 9);
	result[8] = do_test(s3, s4, 0);
	result[9] = do_test("Yoru ni kakeru", "Yoru ni aruku", 7);
	result[10] = do_test("Legend of Zelda:Brethe of the wild", "Legend of Zelda:Majora's Mask", 11);
	result[11] = do_test("Legend of Zelda:Brethe of the wild", "Legend of Zelda:Majora's Mask", 15);
	result[12] = '\0';
	return (result);
}
