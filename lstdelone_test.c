/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:38:58 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 16:21:32 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void	listfree(t_list *list)
{
	t_list	*current;
	t_list	*next;
	int		i;

	i = 1;
	current = list;
	while (current != NULL)
	{	
		next = current->next;
		ft_lstdelone(current, free);
		current = next;
#ifdef PRINT
		printf("list[%d] is deleted\n", i);
#endif
		i++;
	}
}

void	lstdelone_test(void)
{
	t_list	*list;
	t_list	*new;

#ifdef PRINT
	printf("********** ft_lstdelone test ***********\n");
#endif
	list = NULL;

	new = ft_lstnew(strdup("one"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("two"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("three"));
	ft_lstadd_back(&list, new);

	listfree(list);
}
