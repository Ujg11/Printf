/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:48:42 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/23 13:48:42 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printf_char(char c);
int	ft_printf_string(char *str);
int	ft_printf_puntero(void *p);

#endif