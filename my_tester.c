/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:14:16 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/05 11:13:12 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_tester.h"

int	main(void)
{
	char	*result;

	printf("\n********** MY_LIBFT_TESTER **********\n\n");
	result = isalpha_test();
	printf("%-15s  ", "ft_isalpha");
	put_result(result);

	result = isdigit_test();
	printf("%-15s  ", "ft_isdigit");
	put_result(result);

	result = isalnum_test();
	printf("%-15s  ", "ft_isalnum");
	put_result(result);

	result = isascii_test();
	printf("%-15s  ", "ft_isascii");
	put_result(result);

	result = isprint_test();
	printf("%-15s  ", "ft_isprint");
	put_result(result);

	result = strlen_test();
	printf("%-15s  ", "ft_strlen");
	put_result(result);

	result = memset_test();
	printf("%-15s  ", "ft_memset");
	put_result(result);

	result = bzero_test();
	printf("%-15s  ", "ft_bzero");
	put_result(result);

	result = memcpy_test();
	printf("%-15s  ", "ft_memcpy");
	put_result(result);

	result = memmove_test();
	printf("%-15s  ", "ft_memmove");
	put_result(result);

	result = strlcpy_test();
	printf("%-15s  ", "ft_strlcpy");
	put_result(result);

	result = strlcat_test();
	printf("%-15s  ", "ft_strlcat");
	put_result(result);

	result = toupper_test();
	printf("%-15s  ", "ft_toupper");
	put_result(result);

	result = tolower_test();
	printf("%-15s  ", "ft_tolower");
	put_result(result);

	result = strchr_test();
	printf("%-15s  ", "ft_strchr");
	put_result(result);

	result = strrchr_test();
	printf("%-15s  ", "ft_strrchr");
	put_result(result);

	result = strncmp_test();
	printf("%-15s  ", "ft_strncmp");
	put_result(result);

	result = memchr_test();
	printf("%-15s  ", "ft_memchr");
	put_result(result);

	result = memcmp_test();
	printf("%-15s  ", "ft_memcmp");
	put_result(result);

	result = strnstr_test();
	printf("%-15s  ", "ft_strnstr");
	put_result(result);

	result = atoi_test();
	printf("%-15s  ", "ft_atoi");
	put_result(result);

	result = calloc_test();
	printf("%-15s  ", "ft_calloc");
	put_result(result);

	result = strdup_test();
	printf("%-15s  ", "ft_strdup");
	put_result(result);

	result = substr_test();
	printf("%-15s  ", "ft_substr");
	put_result(result);

	result = strjoin_test();
	printf("%-15s  ", "ft_strjoin");
	put_result(result);

	result = strtrim_test();
	printf("%-15s  ", "ft_strtrim");
	put_result(result);

	result = split_test();
	printf("%-15s  ", "ft_split");
	put_result(result);

	result = itoa_test();
	printf("%-15s  ", "ft_itoa");
	put_result(result);

	result = strmapi_test();
	printf("%-15s  ", "ft_strmapi");
	put_result(result);

	result = striteri_test();
	printf("%-15s  ", "ft_striteri");
	put_result(result);

	printf("\n");
	printf("\n");

	putchar_fd_test();
	putstr_fd_test();
	putendl_fd_test();
	putnbr_fd_test();

	printf("\n");
	printf("\n");

#ifdef BONUS
	result = lstnew_test();
	printf("%-15s  ", "ft_lstnew");
	put_result(result);

	result = lstadd_front_test();
	printf("%-15s  ", "ft_lstadd_front");
	put_result(result);

	result = lstsize_test();
	printf("%-15s  ", "ft_lstsize");
	put_result(result);

	result = lstlast_test();
	printf("%-15s  ", "ft_lstlast");
	put_result(result);

	result = lstadd_back_test();
	printf("%-15s  ", "ft_lstadd_back");
	put_result(result);

	printf("\n");
	printf("\n");

	lstdelone_test();
	printf("%-15s  ", "***** ft_lstdelone leak check *****\n");
	system("leaks a.out");
	printf("\n");

	lstclear_test();
	printf("%-15s  ", "***** ft_lstclear leak check *****\n");
	system("leaks a.out");
	printf("\n");

	result = lstiter_test();
	printf("%-15s  ", "ft_lstiter");
	put_result(result);

	result = lstmap_test();
	printf("%-15s  ", "ft_lstmap");
	put_result(result);
#endif

	printf("\n********** LEAK CHECK PART **********\n\n");

	system("leaks a.out");
	return (0);
}
