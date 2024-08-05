# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belamiqu <belamiqu@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 15:43:41 by belamiqu          #+#    #+#              #
#    Updated: 2023/10/24 10:47:21 by belamiqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_isalpha.c ft_strlen.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
ft_memcmp.c ft_strdup.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c\
ft_strmapi.c ft_itoa.c ft_split.c ft_toupper.c

NAME		= libft.a
INCLUDE		= libft.h

OBJS		= ${SRCS:.c=.o}

AR			= ar rc

LIB			= ranlib

CC			= cc

CFLAGS		= -Wall -Wextra -Werror 

all:		${NAME}

%.o: %.c

			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS} 

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

