/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:28:59 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/23 23:28:59 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

static int	write_hexa(int i, int v[], char *base)
{
	int	num_char;
	int	pos;
	int aux;

	num_char = 0;
	while (i >= 0)
	{
		pos = v[i];
		aux = write(1, &base[pos], 1);
		if (aux < 0)
			return (-1);
		num_char++;
		i--;
	}
	return (num_char);
}

static int	littlenum(unsigned long l, char *base)
{
	int num_char;

	num_char = write(1, &base[l], 1);
	if (num_char < 0)
		return (-1);
	return (num_char);
}

int	ft_printf_hexa(unsigned long l, int i, int num_char, char *base)
{
	unsigned long	mod;
	int				v[16];
	int				pos;

	if (l < 16)
		return (littlenum(l, base));
	while (i < 16)
		v[i++] = -1;
	i = 0;
	mod = l % 16;
	l = l / 16;
	while (l >= 15)
	{
		v[i] = mod;
		mod = l % 16;
		l = l / 16;
		i++;
	}
	v[i + 1] = l;
	v[i++] = mod;
	num_char = write_hexa(i, v, base);
	if (num_char == -1)
		return (-1);
	return (num_char);
}

int main(void)
{
	int i;
	i = ft_printf_hexa(15, 0, 0, "0123456789abcdef");
	printf("\n%d", i);
	return (0);
}