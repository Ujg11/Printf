# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 16:15:12 by ojimenez          #+#    #+#              #
#    Updated: 2023/05/26 12:55:28 by ojimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

OBJECTS = ft_printf.o ft_printf_char.o ft_printf_string.o ft_printf_puntero.o ft_printf_hexa.o ft_printf_decimal.o ft_printf_unsigned.o ft_printf_hexa_min.o ft_printf_hexa_maj.o ft_printf_hexa_long.o

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS) $(LIBFT)
	ar rc $(NAME) $(OBJECTS) $(LIBFT)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: re  all clean fclean
