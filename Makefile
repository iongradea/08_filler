# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igradea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/11 19:01:51 by igradea           #+#    #+#              #
#    Updated: 2018/04/23 14:10:39 by igradea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = igradea.filler

# Compiler
CC = gcc

# Source files
SRC = main.c debug.c ft_save_player_map_piece.c ft_init.c annex.c \
			ft_get_info_map_piece.c player_go_to.c solve_dir.c test_dir.c \
			test_coord_save.c player_go_to_2.c test_dir_2.c player_go_to_fill.c \

SRCS = $(addprefix ./$(SRC_DIR)/, $(SRC))

# Directories
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = bin
LBFT_DIR = libft

# Libraries
LIBFT_LIB = -lftprintf

# Include
INC_H = filler.h

# Others commands
RM = /bin/rm

# binaries
OBJ = $(SRC:.c=.o)

OBJS = $(addprefix ./$(OBJ_DIR)/, $(OBJ))

# Flags, libraries, include
# Several compile modes are defined: no flags, debug, standard
ifdef MODE
ifeq ($(MODE), no)
endif
ifeq ($(MODE), debug)
	CFLAGS = -g
endif
ifeq ($(MODE), bug_address)
	CFLAGS = -g3 -fsanitize=address
endif
else
	CFLAGS = -Wall -Wextra -Werror
endif

all: $(NAME)

# compiling run binary
$(NAME): $(OBJS)
	$(MAKE) -C $(LBFT_DIR) MODE=$(MODE)
	$(CC) $(CFLAGS) $^ -L$(LBFT_DIR) $(LIBFT_LIB) -o $@

# compiling binaries
./$(OBJ_DIR)/%.o: ./$(SRC_DIR)/%.c ./$(INC_DIR)/$(INC_H)
	@mkdir ./$(OBJ_DIR) 2> /dev/null || true
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LBFT_DIR) clean
	$(RM) -f $(OBJS)
	@rmdir $(OBJ_DIR) 2> /dev/null || true

fclean: clean
	$(MAKE) -C $(LBFT_DIR) fclean
	$(RM) -f $(NAME)

re: fclean all

# Non-file targets
.PHONY: all, re, clean, fclean
