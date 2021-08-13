/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:26:29 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/12 22:58:26 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static void created_free(char **created)
{
	int		i;

	i = 0;
	while (created[i] != NULL)
	{
		free(created[i]);
		i++;
	}
	free(created);
}

static char	do_test(char const *s, char c, char *expected[])
{
	char	**created;
	int		diff;
	int		i;

	created = ft_split(s, c);
	if (created == NULL && expected == NULL)
		return ('o');
#ifdef PRINT
	i = 0;
	while (expected[i] != NULL)
	{
		printf("created [%d]  is %s\n", i, created[i]);
		printf("expected[%d]  is %s\n", i, expected[i]);
		i++;
	}
	printf("created [%d]  is %s\n", i, created[i]);
	printf("expected[%d]  is %s\n", i, expected[i]);
#endif
	if (created[0] == NULL && expected[0] == NULL)
	{
		created_free(created);
		return ('o');
	}
	diff = 0;
	i = 0;
	while (created[i] != NULL || expected[i] != NULL)
	{
		diff = strcmp(created[i], expected[i]);
		if (diff != 0)
		{
			created_free(created);
			return ('x');
		}
		i++;
	}
	created_free(created);
	return ('o');
}

char	*split_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 8);
#ifdef PRINT
	printf("********** ft_split check **********\n");
#endif
	char	*expected1[] = {"Hikaru", "Akira", "Sai", NULL};
	result[0] = do_test("***Hikaru***Akira***Sai***", '*', expected1);

	char	*expected2[] = {"Hikaru", "Akira", "Sai", NULL};
	result[1] = do_test("Hikaru***Akira***Sai", '*', expected2);

	char	*expected3[] = {"Fujisan", "Kitadake", "Okuhodaka", NULL};
	result[2] = do_test("^^^Fujisan^^^Kitadake^^^Okuhodaka^^^", '^', expected3);

	char	*expected4[] = {"Isogaba maware", NULL};
	result[3] = do_test("!!!!Isogaba maware!!!!", '!', expected4);

	char	*expected5[] = {"atama", "kubi", "kata", "ude", "mune", "hara", NULL};
	result[4] = do_test("	atama	kubi	kata	ude	mune	hara", '	', expected5);

	char	*expected6[] = {NULL};
	result[5] = do_test("!!!!!!!!!!!", '!', expected6);
	result[6] = do_test(NULL, '!', NULL);

	char	*expected7[] = {"Isogaba maware", NULL};
	result[7] = do_test("Isogaba maware", '*', expected7);

	result[8] = '\0';
	return (result);
}
