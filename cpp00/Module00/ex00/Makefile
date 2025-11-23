# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 09:01:17 by brturcio          #+#    #+#              #
#    Updated: 2025/11/21 15:41:01 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98

DIR_OBJ		:= obj/

SOURCES		:= megaphone.cpp
OBJECT		:= $(addprefix $(DIR_OBJ), $(SOURCES:.cpp=.o))

GREEN		= \033[0;32m
RESET		= \033[0m

all: $(NAME)

$(DIR_OBJ)%.o:%.cpp
	@mkdir -p $(DIR_OBJ)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@$(CC) $(CFLAGS) $(OBJECT) -o $(NAME)
	@echo "$(GREEN)✔ $(NAME) created successfully!$(RESET)"

clean:
	@rm -rf $(DIR_OBJ)
	@echo "$(GREEN)✔ Objects cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)✔ Executable cleaned$(RESET)"

re: fclean all

.PHONY: all clean fclear re
