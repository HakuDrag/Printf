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

CFLAGS      = -Wall -Wextra -Werror -I. -Ilibft

OBJ_DIR     = objs
LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRCS        = ft_printf.c \
              ft_printchar.c \
              ft_printnbr.c

OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: %.c ft_printf.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re