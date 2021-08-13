/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 00:18:01 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 00:19:44 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	putendl_fd_test(void)
{
	printf("***** ft_putendl_fd *****\n");
	
	char	s1[] = "yuuyuuhakusho";
	printf("%s\n", s1);
	ft_putendl_fd(s1, STDOUT);

	char	s2[] = "migi straight de buttobasusu";
	printf("%s\n", s2);
	ft_putendl_fd(s2, STDOUT);
	
	char	s3[] = "massugu itte buttobasu";
	printf("%s\n", s3);
	ft_putendl_fd(s3, STDOUT);
}
