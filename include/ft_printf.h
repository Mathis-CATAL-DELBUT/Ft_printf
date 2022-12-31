/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2022/11/14 10:19:51 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);

int		ft_printstr(char *str);
void	ft_put_ptr(intptr_t *num);
int		ft_ptr_len(intptr_t *num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
int		ft_hex_len(unsigned	int num);
int		ft_print_hex(unsigned int num, const char format);

char	*ft_itoa(int n);
int		len_nb(long nb);
int		ft_pointer(size_t pointer);

#endif
