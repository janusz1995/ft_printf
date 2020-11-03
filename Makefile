# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/23 17:36:06 by drina             #+#    #+#              #
#    Updated: 2020/07/02 00:45:38 by drina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all claen fclean bonus re

NAME = libftprintf.a

SRC = check_sym.c ft_atoi.c ft_flags.c ft_hex.c ft_isdigit.c \
		ft_itoa.c ft_pointer.c ft_precision.c ft_print_c.c \
		ft_printf.c ft_str.c ft_strlen.c ft_toupper.c \
		ft_utoa.c ft_width.c num_base.c parse_flags.c \
		print_c_and_str.c print_d_i.c print_pointer.c \
		wr_char_len.c spec.c

SRCO = $(SRC:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME): $(SRCO)
	ar rcs $(NAME) $(SRCO)

%.o:%.c $(HEADER)
	gcc $(FLAGS) $< -o $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
