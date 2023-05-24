/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puntero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:47:36 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/24 14:29:42 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_printf_puntero(void *p)
{
	unsigned long	l;
	int				num_char;

	l = (unsigned long)p;
	num_char = 2;
	if (ft_printf_string("0x") == -1)
		return (-1);
	num_char = ft_printf_hexa(l, 0, "0123456789abcdef");
	if (num_char == -1)
		return (-1);
	return (num_char);
}
/*
int main(void)
{
	int *p;
	int num = 2;
	int i = 20368;

	p = &num;
	printf("Num = %p\n", p);
	printf("Resultat = %x", i);
	return (0);
}*/
