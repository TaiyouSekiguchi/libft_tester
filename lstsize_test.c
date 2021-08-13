/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:49:03 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 14:57:22 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void	listfree(t_list *list)
{
	t_list	*current;
	t_list	*tmp;

	current = list;
	while (current != NULL)
	{
		free(current->content);
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

static char	do_test(t_list *list, int	expected_size)
{
#ifdef PRINT
	printf("func return size is %d\n", ft_lstsize(list));
	printf("expected size    is %d\n", expected_size);
#endif
	if (ft_lstsize(list) == expected_size)
		return ('o');
	else
		return ('x');
}

char	*lstsize_test(void)
{
	char	*result;
	t_list	*list;
	t_list	*new;

#ifdef PRINT
	printf("********** ft_lstsize test ***********\n");
#endif
	result = (char *)malloc(sizeof(char) * 4);

	list = NULL;

	new = ft_lstnew(strdup("one"));
	list = new;
	result[0] = do_test(list, 1);

	new = ft_lstnew(strdup("two"));
	list->next = new;
	result[1] = do_test(list, 2);

	new = ft_lstnew(strdup("three"));
	list->next->next = new;
	result[2] = do_test(list, 3);

	result[3] = '\0';

	listfree(list);
	return (result);
}
