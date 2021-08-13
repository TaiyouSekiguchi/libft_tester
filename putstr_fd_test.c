/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 23:28:13 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 00:16:37 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	putstr_fd_test(void)
{
	printf("***** ft_putstr_fd *****\n");
	
	char	s1[] = "yuuyuuhakusho\n";
	printf("%s", s1);
	ft_putstr_fd(s1, STDOUT);

	char	s2[] = "migi straight de buttobasu\n";
	printf("%s", s2);
	ft_putstr_fd(s2, STDOUT);
	
	char	s3[] = "massugu itte buttobasu\n";
	printf("%s", s3);
	ft_putstr_fd(s3, STDOUT);
}
