#ifndef _LIBFT_H_
#define _LIBFT_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *str);
void	ft_strcpy(char *dest, char *src);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
char	ft_toupper(int c);

#endif
