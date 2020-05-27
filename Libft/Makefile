# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 21:28:04 by ffalia            #+#    #+#              #
#    Updated: 2020/05/27 13:59:04 by ffalia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:			all clean fclean re

NAME			= libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_memcmp.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c  ft_strlen.c  ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c\
			ft_strmapi.c ft_strtrim.c

OBJECTS			= $(SRCS:.c = .o)

INCLUDES=./

all:			$(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
				rm -f $(OBJECTS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all
