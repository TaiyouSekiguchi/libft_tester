/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 23:05:46 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/28 23:26:04 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(void *s, int c, size_t n)
{
	if (ft_memchr(s, c, n) == memchr(s, c, n))
		return ('o');
	else
		return ('x');
}

char	*memchr_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 9);

	char	s1[] = "You are (not) alone";
	result[0] = do_test(s1, '(', sizeof(s1));
	result[1] = do_test(s1, '(', 6);
	result[2] = do_test(s1, 'a', 100);
	result[3] = do_test(s1, 'l', 0);
	result[4] = do_test(s1, '#', 200);

	char	s2[] = "kaigiTEeai4$iai#@kakig 		GTKSit 03)583*kgdk!{} kdgh";
	result[5] = do_test(s2, 'k', 29);
	result[6] = do_test(s2, 'i', 17);
	result[7] = do_test(s2, '*', 33);
	result[8] = '\0';
	return (result);
}
