# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 16:15:12 by ojimenez          #+#    #+#              #
#    Updated: 2023/05/22 17:12:14 by ojimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ../Libft
LIBFT = $(LIBFT_PATH)/libft.a

OBJECTS = ft_printf.o ft_printf_char.o ft_printf_string.o ft_printf_puntero.o ft_printf_decimal.o ft_printf_unsigned.o ft_printf_hexa_min.o ft_printf_hexa_maj.o

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT_PATH)/$(LIBFT)
	ar rc $(NAME) $(OBJECTS) $(LIBFT_PATH)/$(LIBFT)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re  all clean fclean
