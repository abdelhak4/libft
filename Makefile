# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 15:43:57 by ael-mous          #+#    #+#              #
#    Updated: 2021/11/18 22:33:46 by ael-mous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c\
        ft_isalpha.c\
        ft_isdigit.c\
        ft_isascii.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strchr.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_atoi.c\
		ft_calloc.c\
        ft_toupper.c\
        ft_tolower.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\

all :
	gcc -Wall -Wextra -Werror libft.h -c ${SRCS}
	ar rc libft.a *.o
clean :
	rm -f *.o
fclean : clean
	rm -f libft.a
re        : fclean all
