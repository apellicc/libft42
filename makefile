# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apellicc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 15:54:11 by apellicc          #+#    #+#              #
#    Updated: 2015/11/23 16:50:52 by apellicc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_putstr.c ft_strdup.c ft_strncpy.c ft_strsub.c\
ft_memalloc.c ft_strchr.c ft_strequ.c ft_strnequ.c ft_strtrim.c\
ft_memdel.c ft_strclr.c ft_strjoin.c ft_strnew.c ft_memset.c\
ft_strcmp.c ft_strlen.c ft_strnstr.c ft_putchar.c ft_strcpy.c\
ft_strncmp.c  ft_strrchr.c ft_putendl.c  ft_strdel.c ft_strstr.c ft_strcat.c
OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc -c $(FLAG) $(SRC) -I ./
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
