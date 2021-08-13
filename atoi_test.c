/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 00:19:01 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 00:30:40 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(const char *str)
{
	if (ft_atoi(str) == atoi(str))
		return ('o');
	else
		return ('x');
}

char	*atoi_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 19);
	result[0] = do_test("42");
	result[1] = do_test("1289439");
	result[2] = do_test("-66847");
	result[3] = do_test("2147483647");
	result[4] = do_test("-2147483648");
	result[5] = do_test("0");
	result[6] = do_test("    	42");
	result[7] = do_test("  1289439");
	result[8] = do_test("      		-66847");
	result[9] = do_test("	   	2147483647");
	result[10] = do_test("		    -2147483648");
	result[11] = do_test("  		  	0");
	result[12] = do_test("    	+42");
	result[13] = do_test("  +--1289439");
	result[14] = do_test("      		+-66847");
	result[15] = do_test("	   	+2147483647");
	result[16] = do_test("		    +-2147483648");
	result[17] = do_test("  		  	+0");
	result[18] = '\0';
	return (result);
}
