/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:32:34 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/18 11:30:38 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char *str, int c)
{
	if (ft_strrchr(str, c) == strrchr(str, c))
		return ('o');
	else
		return ('x');
}

char	*strrchr_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 7);
	result[0] = do_test("Welcome to 42Tokyo", 'e');
	result[1] = do_test("DON'T PANIC!!", ' ');
	result[2] = do_test("DON'T PANIC!!", '@');
	result[3] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		", '*');
	result[4] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		", '	');
	result[5] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		", '\0');
	result[6] = '\0';
	return (result);
}
