# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 22:07:42 by fvon-der          #+#    #+#              #
#    Updated: 2024/08/07 01:38:20 by fvon-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project names
NAME        = push_swap
BONUS       = checker

# Compiler and flags
CC          = cc
RM          = rm -f
FLAGS       = -Wall -Wextra -Werror

# Colors
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
MAGENTA = \033[1;35m
CYAN = \033[1;36m
RESET = \033[0m

# Directories
OBJ_DIR     = obj/push_swap
OBJ_BONUS_DIR = obj/checker
SRC_DIR     = src/push_swap
SRC_BONUS_DIR = src/checker
LIBFT_DIR   = lib/libft
GNL_DIR     = lib/get_next_line
PRINTF_DIR = lib/ft_printf
INCLUDE_DIR = include

GNL_OBJ_DIR = $(GNL_DIR)/obj

# Include paths for libraries and headers
INCLUDE     = -I$(INCLUDE_DIR)  -I$(PRINTF_DIR)/include -I$(LIBFT_DIR)/include -I$(GNL_DIR)/include
LIBRARIES   = -L$(LIBFT_DIR) -L$(PRINTF_DIR) -lftprintf -lft

# Source and Object files
SRC         = $(wildcard $(SRC_DIR)/*.c)
OBJ         = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

SRC_BONUS   = $(wildcard $(SRC_BONUS_DIR)/*.c)
OBJ_BONUS   = $(patsubst $(SRC_BONUS_DIR)/%.c,$(OBJ_BONUS_DIR)/%.o,$(SRC_BONUS))

# Exclude push_swap.o from bonus object files
ADD_OBJS    = $(filter-out $(OBJ_DIR)/main.o, $(OBJ))

# Hardcoded GNL object files
GNL_OBJS    = $(GNL_OBJ_DIR)/get_next_line.o $(GNL_OBJ_DIR)/get_next_line_utils.o

# Targets
all: $(NAME)
bonus: $(BONUS)
# Debug target
debug: CFLAGS += -g
debug: re

# Ensure directories exist
$(OBJ_DIR):
	@echo "Creating directory: $(OBJ_DIR)"
	@mkdir -p $(OBJ_DIR)

$(OBJ_BONUS_DIR):
	@echo "Creating directory: $(OBJ_BONUS_DIR)"
	@mkdir -p $(OBJ_BONUS_DIR)

$(GNL_OBJ_DIR):
	@echo "$(CYAN)Checking for  GNL objects..$(RESET)"
	@$(MAKE) -C $(GNL_DIR)

# Ensure libft.a is built if it doesn't exist
$(LIBFT_DIR)/libft.a:
	@echo "$(CYAN)Checking for libft library...$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)

$(PRINTF_DIR)/libftprintf.a: $(LIBFT_DIR)/libft.a
	@echo "$(CYAN)Checking for ft_printf library...$(RESET)"
	@$(MAKE) -C $(PRINTF_DIR)


# Build object files for main project
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling push_swap object: $<"
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "Object file created: $@"

# Build object files for bonus
$(OBJ_BONUS_DIR)/%.o: $(SRC_BONUS_DIR)/%.c | $(OBJ_BONUS_DIR) $(LIBFT_DIR)/libft.a $(GNL_OBJ_DIR) $(PRINTF_DIR)/libftprintf.a
	@echo "Compiling checker object: $<"
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "Object file created: $@"

# Build the main executable
$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a $(PRINTF_DIR)/libftprintf.a 
	@echo "Linking $(NAME) with libft.a, libftprintf.a "
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(INCLUDE) $(LIBRARIES)
	@echo "$(NAME) built successfully."

# Build the bonus executable
$(BONUS): $(OBJ_BONUS) $(ADD_OBJS) $(LIBFT_DIR)/libft.a $(PRINTF_DIR)/libftprintf.a $(GNL_OBJ_DIR)
	@echo "Linking $(BONUS) with $(LIBFT_DIR)/libft.a and other object files"
	@$(CC) $(FLAGS) $(ADD_OBJS) $(OBJ_BONUS) $(GNL_OBJS) -o $(BONUS) $(INCLUDE) $(LIBRARIES)
	@echo "$(BONUS) built successfully."

# Clean object files
clean:
	@echo "Cleaning object files..."
	@$(RM) -rf $(OBJ_DIR)
	@$(RM) -rf $(OBJ_BONUS_DIR)
	@echo "Object files cleaned."

# Clean all files
fclean: clean
	@echo "Cleaning executables and libraries..."
	@$(RM) $(NAME) $(BONUS)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(MAKE) fclean -C $(GNL_DIR)
	@echo "All files cleaned."

# Rebuild everything
re: fclean all
	@echo "Rebuilding everything..."

.PHONY: all clean fclean re bonus debug
