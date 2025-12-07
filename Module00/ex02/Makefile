# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 23:44:35 by brturcio          #+#    #+#              #
#    Updated: 2025/12/07 17:14:17 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Account
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g3

DIR_SRCS	:= srcs/
DIR_OBJS	:= obj/

SOURCES		:= Account.cpp tests.cpp
OBJECTS		:= $(addprefix $(DIR_OBJS), $(SOURCES:.cpp=.o))

GREEN		= \033[0;32m
RESET		= \033[0m

all: $(NAME)

$(DIR_OBJS)%.o:%.cpp Account.hpp
	@mkdir -p $(DIR_OBJS)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)✔ $(NAME) Created Successfully! $(RESET)"	

clean: 
	@rm -rf $(DIR_OBJS)
	@echo "$(GREEN)✔ Objects cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)✔ Executable Cleaned$(RESET)"

re: fclean all

.PHONY: all clean fclean re
