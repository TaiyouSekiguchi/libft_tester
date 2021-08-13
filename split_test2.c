/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:43:53 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/05 11:53:00 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	split_free(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int main(void)
{
	char	str[] = "**zero**one***two***three*four****five**six**seven**eight***nine";
	char	**split;
	int		i;

	split = ft_split(str, '*');
	if (split == NULL)
	{
		printf("split error\n");
		system("leaks a.out");
		return (1);
	}

	i = 0;
	while (split[i] != NULL)
	{
		printf("split[%d] is %s\n", i, split[i]);
		i++;
	}
	split_free(split);
	system("leaks a.out");
	return (0);
}

