/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboufe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:13:15 by nabboufe          #+#    #+#             */
/*   Updated: 2019/04/09 20:00:11 by nabboufe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_short(char *nombre, va_list ap)
{
	short i_value;

	i_value = (short)va_arg(ap, int);
	nombre = ft_itoa(i_value);
	return (nombre);
}
