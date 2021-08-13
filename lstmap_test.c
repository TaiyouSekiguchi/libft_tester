/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:55:42 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 17:08:12 by tsekiguc         ###   ########.fr       */
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

static void	*my_toupper(void *content)
{
	char	*ret;
	char	*copy;
	int		i;

	if (content == NULL)
		return (NULL);

	copy = (char *)content;
	ret = (char *)malloc(sizeof(char) * (strlen(copy) + 1));
	if (ret == NULL)
		return (NULL);

	i = 0;
	while (copy[i] != '\0')
	{
		if (copy[i] >= 'a' && copy[i] <= 'z')
			ret[i] = copy[i] - ('a' - 'A');
		else
			ret[i] = copy[i];
		i++;
	}
	return (ret);
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

char	*lstmap_test(void)
{
	char	*result;
	t_list	*list1;
	t_list	*list2;
	t_list	*new;
	void	*(*func)(void *);

#ifdef PRINT
	printf("********** ft_lstmap test ***********\n");
#endif
	result = (char *)malloc(sizeof(char) * 4);
	if (result == NULL)
		return (NULL);

	list1 = NULL;

	new = ft_lstnew(strdup("one"));
	ft_lstadd_back(&list1, new);

	new = ft_lstnew(strdup("two"));
	ft_lstadd_back(&list1, new);

	new = ft_lstnew(strdup("three"));
	ft_lstadd_back(&list1, new);

	func = my_toupper;
	list2 = ft_lstmap(list1, (*func), free);

	result[0] = do_test(list2, "ONE");
	result[1] = do_test(list2->next, "TWO");
	result[2] = do_test(list2->next->next, "THREE");
	result[3] = '\0';

	listfree(list1);
	listfree(list2);
	return (result);
}
