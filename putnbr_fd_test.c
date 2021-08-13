/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 00:21:29 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 00:24:28 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	putnbr_fd_test(void)
{
	printf("***** ft_putnbr_fd *****\n");
	
	int		n;

	n = 42;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");

	n = 33333;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");

	n = -1458746;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");

	n = 0;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");

	n = 2147483647;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");

	n = -2147483648;
	printf("%d\n", n);
	ft_putnbr_fd(n, STDOUT);
	printf("\n");
}
