# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: callwood <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/28 13:41:28 by callwood          #+#    #+#              #
#    Updated: 2026/10/28 13:49:12 by callwood         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

OBJ_DIR     = objs

SRCS        = 

OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c ft_printf.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
