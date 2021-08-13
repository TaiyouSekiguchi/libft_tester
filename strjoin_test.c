/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:36:07 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/07/29 14:08:56 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

static char	do_test(char const *s1, char const *s2, char const *expected)
{
	char	*created;
	int		diff;

	created = ft_strjoin(s1, s2);
#ifdef PRINT
	printf("created  is %s\n", created);
	printf("expected is %s\n", expected);
#endif
	diff = 0;
	if (!(created == NULL && expected == NULL))
		diff = strcmp(created, expected);
	free(created);
	if (diff == 0)
		return ('o');
	else
		return ('x');
}

char	*strjoin_test(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 7);
#ifdef PRINT
	printf("********** ft_strjoin check **********\n");
#endif
	result[0] = do_test("yuuyuu", "hakusho", "yuuyuuhakusho");
	result[1] = do_test("kamigamino", "itadaki", "kamigaminoitadaki");
	result[2] = do_test("@asdf	!", "*lkjh ", "@asdf	!*lkjh ");
	result[3] = do_test(NULL, "test", NULL);
	result[4] = do_test("test", NULL, NULL);
	result[5] = do_test(NULL, NULL, NULL);
	result[6] = '\0';
	return (result);
}
