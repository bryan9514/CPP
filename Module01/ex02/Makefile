# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/13 15:50:34 by brturcio          #+#    #+#              #
#    Updated: 2025/12/13 16:08:53 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= HiThisIsBrain
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g3

DIR_OBJS	:= obj/

SOURCE		:= main.cpp
OBJS		:= $(addprefix $(DIR_OBJS), $(SOURCE:.cpp=.o))

GREEN		:= \033[0;32m
RESET		:= \033[0m

all: $(NAME)

$(DIR_OBJS)%.o: %.cpp
	@mkdir -p $(DIR_OBJS)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✔ $(NAME) Created Successfully!$(RESET)"

clean: 
	@rm -rf $(DIR_OBJS)
	@echo "$(GREEN)$(GREEN)✔ Objects Cleaned$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)✔ Executable Cleaned$(RESET)"

re: fclean all

.PHONY: all clean fclean re

