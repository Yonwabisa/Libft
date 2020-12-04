#include <unistd.h>
#include <stdlib.h>

#ifndef _LIBFT_H_
#define _LIBFT_H_

char	*ft_strdup(const char *str);
void	ft_strcpy(char *dest, char *src);
void	ft_strncpy(char *dest, char *src, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_strlen(const char *str);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memalloc(size_t size);

#endif
