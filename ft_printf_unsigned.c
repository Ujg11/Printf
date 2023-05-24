/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:56:27 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/24 14:29:52 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static int	put_unsigned_nbr(unsigned int n, int *num_char)
{
	unsigned int	div;
	unsigned int	mod;
	int				aux;

	div = n / 10;
	mod = n % 10;
	if (div > 0)
		put_unsigned_nbr(div, num_char);
	aux = ft_printf_char(mod);
	if (aux == -1)
		return (-1);
	(*num_char) += aux;
	return (1);
}

int	ft_printf_unsigned(unsigned int n)
{
	int	*p;
	int	num_char;
	int	flag;

	num_char = 0;
	p = &num_char;
	flag = put_unsigned_nbr(n, p);
	if (flag == -1)
		return (-1);
	return (num_char);
}
