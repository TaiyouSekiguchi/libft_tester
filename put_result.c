/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_result.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:48:29 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/30 16:07:30 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

void	put_result(char *result)
{
	int	i;

	if (result == NULL)
	{
		printf("result error\n");
		return ;
	}

	i = 0;
	while (result[i] != '\0')
	{
		if (result[i] == 'o')
			printf("\x1b[32m%d:OK \x1b[39m", i + 1);
		else if (result[i] == 'x')
			printf("\x1b[31m%d:NG \x1b[39m", i + 1);
		i++;
	}
	free(result);
	printf("\n");
}

void	put_result1(char *result)
{
	if (result == NULL)
	{
		printf("result error\n");
		return ;
	}

	printf("\x1b[32m%s\x1b[39m", result);
	free(result);
	printf("\n");
}
