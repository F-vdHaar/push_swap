# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 21:54:35 by fvon-der          #+#    #+#              #
#    Updated: 2024/07/31 13:10:28 by fvon-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC          = cc
FLAGS       = -Wall -Wextra -Werror
# Define removal command
RM = rm -rf
# Directories
SRC_DIR      = src
OBJ_DIR      = obj
INCLUDE_DIR  = include

# Source and Object files
SRC          = $(wildcard $(SRC_DIR)/*.c)
OBJ          = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Default target
all: $(OBJ)
	
# Create object directory if it doesn't exist
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Build object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "GNL lib: Compiling"
	@$(CC) $(FLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJ_DIR)
	@echo "GNL lib: cleaned."

# Clean everything
fclean: clean
	$(RM) $(OBJ)

# Rebuild everything
re: fclean all

# Debug target
debug: FLAGS += -g
debug: re

.PHONY: all clean fclean re debug
