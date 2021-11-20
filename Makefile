# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 01:39:25 by ael-mous          #+#    #+#              #
#    Updated: 2021/11/20 08:15:28 by ael-mous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS = ft_atoi.c\
        ft_bzero.c\
        ft_calloc.c\
        ft_isalnum.c\
        ft_isalpha.c\
        ft_isascii.c\
        ft_isdigit.c\
        ft_isprint.c\
        ft_itoa.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_putchar_fd.c\
        ft_putendl_fd.c\
        ft_putnbr_fd.c\
        ft_putstr_fd.c\
        ft_split.c\
        ft_strchr.c\
        ft_strdup.c\
        ft_striteri.c\
        ft_strjoin.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strmapi.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_strtrim.c\
        ft_substr.c\
        ft_tolower.c\
        ft_toupper.c
FLAGS = gcc -Wall -Werror -Wextra

NAME = libft.a

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)

%.o : %.c
	$(FLAGS) -c $< -o $@
	ar rcs libft.a $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
