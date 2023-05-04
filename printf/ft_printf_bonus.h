/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:22:55 by pedromar          #+#    #+#             */
/*   Updated: 2022/11/13 12:52:12 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>

# define BUFFER_ULL 64

# define F_ZERO       1
# define F_PLUS       2
# define F_LEFT       4
# define F_HASH       8
# define F_SPACE     16
# define F_PRECISION 32
# define F_UPPER    128
# define F_NEGATIVE 256

# define LEN_HH   1
# define LEN_H    2
# define LEN_LL   4
# define LEN_L    8
# define LEN_J   16
# define LEN_Z   32

typedef struct s_format
{
	unsigned int	flags;
	unsigned int	width;
	unsigned int	precision;
	unsigned int	length;
	unsigned int	base;
	unsigned int	inbuffer;
}	t_format;

int	ft_printf(const char *str_f, ...);
int	ft_vaprintf(const char *str_f, va_list va);
int	ft_switch_conversion(const char **str_f, va_list va, t_format *fmt);
int	ft_uint_conversion(t_format *fmt, va_list va);
int	ft_sint_conversion(t_format *fmt, va_list va);
int	ft_char_conversion(t_format *fmt, char a);
int	ft_str_conversion(t_format *fmt, const char *str);
int	ft_double_conversion(void );
int	ft_lluitoa(unsigned long long int num, t_format *fmt);
#endif
