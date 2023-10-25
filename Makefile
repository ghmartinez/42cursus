# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfarina <pfarina@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 13:35:15 by pfarina           #+#    #+#              #
#    Updated: 2022/03/10 17:46:07 by pfarina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strlen.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memset.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\

OBJ		=	$(SRC:.c=.o)
OBB		=	$(SRB:.c=.o)
AR		=	ar rcs
CC		=	cc
FLAGS	=	-Wall -Werror -Wextra
all:		$(NAME)
$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
%.o:		%.c
			@$(CC) $(FLAGS) -c $< -o $@
clean:
			@rm -f $(OBJ) $(OBB)
fclean:		clean
			@rm -f $(NAME)
re:			fclean	all
main:		$(OBJ) $(OBB)
			@$(CC) $(FLAGS) $(OBJ) $(OBB) main.c
			./a.out
