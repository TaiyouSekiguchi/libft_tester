/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tester.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:13:19 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/08/12 23:11:42 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_TESTER_H
# define MY_TESTER_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>

# define TRUE 1
# define FALSE 0
# define STDOUT 1
//# define PRINT 1

void	put_result(char *result);
void	put_result1(char *result);
char	*isalpha_test(void);
char	*isdigit_test(void);
char	*isalnum_test(void);
char	*isascii_test(void);
char	*isprint_test(void);
char	*strlen_test(void);
char	*memset_test(void);
char	*bzero_test(void);
char	*memcpy_test(void);
char	*memmove_test(void);
char	*strlcpy_test(void);
char	*strlcat_test(void);
char	*toupper_test(void);
char	*tolower_test(void);
char	*strchr_test(void);
char	*strrchr_test(void);
char	*strncmp_test(void);
char	*memchr_test(void);
char	*memcmp_test(void);
char	*strnstr_test(void);
char	*atoi_test(void);
char	*calloc_test(void);
char	*strdup_test(void);
char	*substr_test(void);
char	*strjoin_test(void);
char	*strtrim_test(void);
char	*split_test(void);
char	*itoa_test(void);
char	*strmapi_test(void);
char	*striteri_test(void);
void	putchar_fd_test(void);
void	putstr_fd_test(void);
void	putendl_fd_test(void);
void	putnbr_fd_test(void);
char	*lstnew_test(void);
char	*lstadd_front_test(void);
char	*lstsize_test(void);
char	*lstlast_test(void);
char	*lstadd_back_test(void);
void	lstdelone_test(void);
void	lstclear_test(void);
char	*lstiter_test(void);
char	*lstmap_test(void);

#endif
