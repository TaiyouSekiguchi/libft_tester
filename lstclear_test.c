/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:10:32 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/12 23:09:02 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	lstclear_test(void)
{
	t_list	*list;
	t_list	*new;

	list = NULL;

	new = ft_lstnew(strdup("one"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("two"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("three"));
	ft_lstadd_back(&list, new);

	ft_lstclear(&list, free);
}
