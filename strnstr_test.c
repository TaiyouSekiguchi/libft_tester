/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 23:53:28 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 00:13:52 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(const char *haystack, const char *needle, size_t len)
{
	if (ft_strnstr(haystack, needle, len) == strnstr(haystack, needle, len))
		return ('o');
	else
		return ('x');
}

char	*strnstr_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 12);
	result[0] = do_test("Welcome to 42Tokyo", "42Tokyo", 18);
	result[1] = do_test("Welcome to 42Tokyo", "42Tokyo", 17);
	result[2] = do_test("DON'T PANIC!!", " PA", 20);
	result[3] = do_test("DON'T PANIC!!", " Pa", 20);
	result[4] = do_test("DON'T PANIC!!", " PA", 4);
	result[5] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		!", "{}\"sik", 100);
	result[6] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		!", "{}\"sik", 0);
	result[7] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		!", "00", 100);
	result[8] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		!", "", 100);
	result[9] = do_test("", "123456", 100);
	result[10] = do_test("", "", 0);
	result[11] = '\0';
	return (result);
}
