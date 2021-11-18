#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>



int        ft_printf(const char *format, ...);
int        ft_formats(va_list args, const char format);
int        ft_printchar(int c);
int        ft_printstr(char *str);
int        ft_print_ptr(unsigned long long ptr);
int        ft_printnbr(int n);
int        ft_print_unsigned(unsigned int n);
int        ft_print_hex(unsigned int num, const char format);
int        ft_printpercent(void);

void    ft_putstr(char *str);
void    ft_put_ptr(uintptr_t num);
int        ft_ptr_len(uintptr_t num);
char    *ft_uitoa(unsigned int n);
int        ft_num_len(unsigned    int num);
void    ft_put_hex(unsigned int num, const char format);
int        ft_hex_len(unsigned    int num);
void    ft_putchar_fd(char c, int fd);
char    *ft_itoa(int n);
//void    *ft_strcpy2(char *dest, char *src);
//size_t    ft_nb_len(int n);
//char    *ft_glitchnorminette(int nb, char *str, size_t size);

#endif
