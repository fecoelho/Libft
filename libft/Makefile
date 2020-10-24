# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 13:30:39 by fcoelho           #+#    #+#              #
#    Updated: 2020/02/20 20:37:46 by fcoelho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_bzero.c ft_memmove.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
	 ft_memset.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
	 ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_isalpha.c \
	 ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	 ft_tolower.c ft_strdup.c ft_calloc.c ft_atoi.c ft_substr.c ft_strjoin.c \
	 ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_itoa.c ft_putnbr_fd.c \
	 ft_putendl_fd.c ft_strmapi.c ft_split.c ft_lstnew.c ft_lstadd_front.c \
	 ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	 ft_lstiter.c ft_lstmap.c ft_array_char.c ft_lenght_nbr.c ft_list_find_bonus.c \
	 ft_list_remove_if.c ft_list_remove_one_if.c ft_occurance.c ft_strcmp.c ft_strcpy.c \
	 ft_strstr.c get_next_line.c \
	 ft_isblank.c ft_iscntrl.c ft_isgraph.c ft_islower.c ft_isspace.c \
	 ft_isupper.c ft_isxdigit.c ft_memalloc.c ft_memdel.c ft_putchar.c \
	 ft_putendl.c ft_putstr.c ft_putnbr.c ft_str_is_alpha.c ft_str_is_lowercase.c \
	 ft_str_is_uppercase.c ft_str_is_numeric.c ft_str_is_printable.c ft_strcapitalize.c \
	 ft_str_lowcase.c ft_printf.c ft_handler.c ft_print_c.c \
	 ft_print_width.c ft_flags.c ft_print_s.c \
	 ft_print_di.c ft_print_p.c ft_print_u.c \
	 ft_print_x.c ft_print_percent.c ft_itoa_base.c \
	 ft_itoa_u.c ft_putlstr.c ft_strnew.c 


OBJECTS= $(SRCS:.c=.o)


INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

clear: clean fclean
