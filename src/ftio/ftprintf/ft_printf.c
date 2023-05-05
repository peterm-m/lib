/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:22:33 by pedromar          #+#    #+#             */
/*   Updated: 2022/11/13 13:11:06 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str_f, ...)
{
	va_list	va;
	int		print_len;

	va_start(va, str_f);
	print_len = ft_vaprintf(str_f, va);
	va_end(va);
	return (print_len);
}
