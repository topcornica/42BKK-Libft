# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 23:23:45 by nrujipun          #+#    #+#              #
#    Updated: 2022/05/26 19:30:59 by nrujipun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_strlen.c \
	 ft_memset.c \
	 ft_bzero.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_strlcpy.c \
	 ft_strlcat.c \
	 ft_toupper.c \
	 ft_tolower.c \
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_strncmp.c \
	 ft_atoi.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_calloc.c \
	 ft_strdup.c \
	 ft_strnstr.c \
	 ft_substr.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_itoa.c \
	 ft_striteri.c\
	 ft_strmapi.c\
	 ft_putchar_fd.c\
	 ft_putstr_fd.c\
	 ft_putendl_fd.c\
	 ft_putnbr_fd.c\

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	@gcc $(FLAGS) -c $(TARGET) -I./
	@ar rc $(NAME) *.o
	@rm -rf *.o

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
