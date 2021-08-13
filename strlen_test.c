/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:45:40 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 15:44:07 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char *str)
{

	if (ft_strlen(str) == strlen(str))
		return ('o');
	else
		return ('x');
}

char	*strlen_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 4);
	result[0] = do_test("Welcome to 42Tokyo");
	result[1] = do_test("DON'T PANIC!!");
	result[2] = do_test("@@@jdifjkkkgidlsliie!!*{}\"sikggjenck\"^icsh		");
	result[3] = '\0';
	return (result);
}
