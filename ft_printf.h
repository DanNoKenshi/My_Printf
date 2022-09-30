#ifndef FT_PRINTF_H
# define FT_PRINT_H

int ft_printf(const char *s, ...);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
int ft_strlen(char *str);

#endif