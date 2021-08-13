/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:58:51 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 15:05:16 by tsekiguc         ###   ########.fr       */
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

static char	do_test(t_list *list, const char *expected)
{
	t_list	*last;
	int		diff;

	last = ft_lstlast(list);
	diff = strcmp(last->content, expected);
#ifdef PRINT
	printf("content  is %s\n", last->content);
	printf("expected is %s\n", expected);
#endif
	if (last->next == NULL && diff == 0)
		return ('o');
	else
		return ('x');
}

char	*lstlast_test(void)
{
	char	*result;
	t_list	*list;
	t_list	*new;

#ifdef PRINT
	printf("********** ft_lstlast test ***********\n");
#endif
	result = (char *)malloc(sizeof(char) * 4);

	list = NULL;

	new = ft_lstnew(strdup("one"));
	list = new;
	result[0] = do_test(list, "one");

	new = ft_lstnew(strdup("two"));
	list->next = new;
	result[1] = do_test(list, "two");

	new = ft_lstnew(strdup("three"));
	list->next->next = new;
	result[2] = do_test(list, "three");

	result[3] = '\0';

	listfree(list);
	return (result);
}
