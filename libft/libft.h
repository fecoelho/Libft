/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:26:08 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 20:37:43 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFFER_SIZE 1

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdio.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_atoi(const char *str);
char			**array_char(int line, int column);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_iscntrl(int c);
int				ft_isdigit(int c);
int				ft_isgraph(int c);
int				ft_islower(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_isxdigit(int c);
char			*ft_itoa(int n);
int				ft_lenght_nbr(int nb);
t_list			*ft_list_find(t_list *begin_list, void *data_ref,
						size_t n, int (*cmp)());
void			ft_list_remove_if(t_list **begin_list, void *data_ref,
						  int (*cmp)(), void (*free_fct)(void *));
void	ft_list_remove_one_if(t_list **begin_list, void *data_ref,
							  int (*cmp)(), void (*free_fct)(void *));
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
							 void (*del)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *restrict dst, const void *restrict src,
						   size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *str, int c, size_t len);
int				ft_occurance(char *s1, char *s2);
void			ft_putchar(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char *str);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr(char *str);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
int				ft_str_is_alpha(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_str_is_uppercase(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_strlen(const char *str);
char			*ft_strlowcase(char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				get_next_line(int fd, char **line);

#endif
