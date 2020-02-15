# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 13:30:39 by fcoelho           #+#    #+#              #
#    Updated: 2020/02/15 00:46:52 by fcoelho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
red		=	`tput setaf 1`
green	=	`tput setaf 2`
reset	=	`tput sgr0`

SRCS=	ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memccpy.c		\
		ft_memmove.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strlen.c			\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strnstr.c		\
		ft_strncmp.c		\
		ft_atoi.c			\
		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJECTS= $(SRCS:.c=.o)

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@echo $(red)Compiling...
	-@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	@echo $(green)Done!$(reset)
	-@ar rc $(NAME) $(OBJECTS)
	-@ranlib $(NAME)

copy:
	@echo $(red)Copying files.
	-@cp -f Part1/*.c .
	@echo Copying files..
	-@cp -f Part2/*.c .
	@echo Copying files...
	-@cp -f Bonus/*.c .
	@echo $(green)Done!
	@echo $(red)Compiling...
	-@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	@echo $(green)Done!$(reset)
	-@ar rc $(NAME) $(OBJECTS)
	-@ranlib $(NAME)

clean:
	@echo $(red)Deleting \*.o files...
	-@rm -f $(OBJECTS)
	@echo $(green)Done!$(reset)

fclean: 
	@echo $(red)Deleting \*.a file...
	-@rm -f $(NAME)
	@echo $(green)Done!$(reset)

hclean:
	@echo $(red)Deleting \*.c and \*.o files...
	-@rm -f $(SRCS) $(OBJECTS)
	@echo $(green)Done!$(reset)

re: fclean all

clear: clean fclean
