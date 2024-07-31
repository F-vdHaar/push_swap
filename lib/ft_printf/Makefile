# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 12:14:44 by fvon-der          #+#    #+#              #
#    Updated: 2024/07/31 13:20:05 by fvon-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
INCLUDE     = include
LIBFT       = ../libft
SRC_DIR     = src
OBJ_DIR     = obj
CC          = gcc
CFLAGS      = -Wall -Werror -Wextra -I$(INCLUDE) -I$(LIBFT)/include
RM          = rm -f
AR          = ar rcs

# Colors
DEF_COLOR   = \033[0;39m
YELLOW      = \033[0;93m
BLUE        = \033[0;94m
CYAN        = \033[0;96m
GREEN       = \033[0;92m

SRC         = $(wildcard $(SRC_DIR)/*.c)
OBJ         = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(LIBFT)/libft.a $(NAME)

# Ensure the obj directory exists before compiling object files
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

bonus: all

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ) $(LIBFT)/libft.a
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT)/libft.a:
	@$(MAKE) -C $(LIBFT)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT)
	@echo "$(BLUE)LIB PRINTF object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT)
	@echo "$(CYAN) LIB PRINTF  executable files cleaned!$(DEF_COLOR)"

re: fclean all

# Debug target
debug: CFLAGS += -g
debug: re

norm:
	@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY: all bonus clean fclean re norm debug
