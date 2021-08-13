/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:32:28 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 16:53:30 by tsekiguc         ###   ########.fr       */
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

static void	my_toupper(void *content)
{
	int		i;
	char	*copy;

	if (content == NULL)
		return ;
	copy = (char *)content;
	i = 0;
	while (copy[i] != '\0')
	{
		if (copy[i] >= 'a' && copy[i] <= 'z')
			copy[i] -= 'a' - 'A';
		i++;
	}
}


static char	do_test(t_list *element, const char *expected)
{
	int		diff;

	diff = strcmp(element->content, expected);
#ifdef PRINT
	printf("content  is %s\n", element->content);
	printf("expected is %s\n", expected);
#endif
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*lstiter_test(void)
{
	char	*result;
	t_list	*list;
	t_list	*new;
	void	(*func)(void *);

#ifdef PRINT
	printf("********** ft_lstiter test ***********\n");
#endif
	result = (char *)malloc(sizeof(char) * 4);
	if (result == NULL)
		return (NULL);

	list = NULL;

	new = ft_lstnew(strdup("one"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("two"));
	ft_lstadd_back(&list, new);

	new = ft_lstnew(strdup("three"));
	ft_lstadd_back(&list, new);

	func = my_toupper;
	ft_lstiter(list, (*func));

	result[0] = do_test(list, "ONE");
	result[1] = do_test(list->next, "TWO");
	result[2] = do_test(list->next->next, "THREE");
	result[3] = '\0';

	listfree(list);
	return (result);
}
