# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 09:45:12 by tsekiguc          #+#    #+#              #
#    Updated: 2021/08/12 23:02:47 by tsekiguc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = atoi_test.c bzero_test.c calloc_test.c isalnum_test.c isalpha_test.c\
		isascii_test.c isdigit_test.c isprint_test.c itoa_test.c memchr_test.c\
		memcmp_test.c memcpy_test.c memmove_test.c memset_test.c put_result.c\
		putchar_fd_test.c putendl_fd_test.c putnbr_fd_test.c putstr_fd_test.c\
		split_test.c strchr_test.c strdup_test.c striteri_test.c strjoin_test.c\
		strlcat_test.c strlcpy_test.c strlen_test.c strmapi_test.c strncmp_test.c\
		strnstr_test.c strrchr_test.c strtrim_test.c substr_test.c tolower_test.c\
		toupper_test.c my_tester.c
BONUS = lstadd_back_test.c lstadd_front_test.c lstclear_test.c lstdelone_test.c\
		lstiter_test.c lstlast_test.c lstmap_test.c lstnew_test.c lstsize_test.c

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) libft.a

bonus:
	$(CC) $(CFLAGS) $(SRCS) $(BONUS) libft.a -D BONUS=1
