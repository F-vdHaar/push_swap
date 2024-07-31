# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 17:37:23 by fvon-der          #+#    #+#              #
#    Updated: 2024/07/31 13:01:30 by fvon-der         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
DEF_COLOR   = \033[0;39m
YELLOW      = \033[0;93m
BLUE        = \033[0;94m
CYAN        = \033[0;96m
GREEN       = \033[0;92m

# Use cc as the default compiler
CC = cc
NAME = libft.a
# Compiler flags with the include directory specified (I.)
CFLAGS = -Wall -Wextra -Werror -I.

# Archive tool
AR = ar
ARFLAGS = rcs

# Directories
SRC_DIR = src
OBJ_DIR = obj

# Source and Object files
SRC         = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES   = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Rule to build the library
$(NAME): $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^
	@echo "$(GREEN)libft.a created!$(DEF_COLOR)"

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure OBJ_DIR exists before writing object files
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Default target
all: $(NAME)

# Debug target
debug: CFLAGS += -g
debug: re

# Clean up
clean:
	$(RM) -r $(OBJ_DIR)
	@echo "$(BLUE)libft object files cleaned!$(DEF_COLOR)"

# Full clean (includes object files and library)
fclean: clean
	$(RM) $(NAME)

# Rebuild
re: fclean all

# Phony targets
.PHONY: all debug clean fclean re

# Norm target
norm:
	@norminette  $(SRC_DIR)/*.c $(INCLUDE) | grep -v -B1  "OK!$$" || true
