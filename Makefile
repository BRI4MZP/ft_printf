# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 04:49:40 by briveiro          #+#    #+#              #
#    Updated: 2022/12/06 22:29:44 by briveiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utilities.c
AR = ar -rcs
CCFLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Se ha compilado perfectamente ✅"

%.o: %.c
	@gcc $(CCFLAGS) -c -o $@ $<

clean:
	@rm $(OBJS)
	@echo "Se ha borrado todo :D"


fclean: clean
	@rm -f $(NAME)

	
re: fclean all

.PHONY: all fclean clean re
