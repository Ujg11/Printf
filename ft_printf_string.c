/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:14:16 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/23 16:14:16 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "../Libft/libft.h"

int	ft_printf_string(char *str)
{
	int	num_char;

	num_char = write(1, str, ft_strlen(str));
	if (num_char < 0)
		return (0);
	return (num_char);
}
/*
int main(void)
{
	char str[] = "Hola que tal";
	int res;

	res = ft_printf_string(str);
	printf("\nRes ft = %d\n", res);
	res = printf("%s", str);
	printf("\nRes real = %d", res);
	return (0);
}*/