/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 23:28:13 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 00:16:02 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	putchar_fd_test(void)
{
	printf("***** ft_putchar_fd *****\n");
	printf("\\\\\\\\!!Marvin!!////\n");
	ft_putchar_fd('\\', STDOUT);
	ft_putchar_fd('\\', STDOUT);
	ft_putchar_fd('\\', STDOUT);
	ft_putchar_fd('\\', STDOUT);
	ft_putchar_fd('!', STDOUT);
	ft_putchar_fd('!', STDOUT);
	ft_putchar_fd('M', STDOUT);
	ft_putchar_fd('a', STDOUT);
	ft_putchar_fd('r', STDOUT);
	ft_putchar_fd('v', STDOUT);
	ft_putchar_fd('i', STDOUT);
	ft_putchar_fd('n', STDOUT);
	ft_putchar_fd('!', STDOUT);
	ft_putchar_fd('!', STDOUT);
	ft_putchar_fd('/', STDOUT);
	ft_putchar_fd('/', STDOUT);
	ft_putchar_fd('/', STDOUT);
	ft_putchar_fd('/', STDOUT);
	ft_putchar_fd('\n', STDOUT);
}
