# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/12 14:25:29 by brturcio          #+#    #+#              #
#    Updated: 2025/12/12 22:14:42 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Zombie
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g3

DIR_SRCS	:= source/
DIR_OBJS	:= obj/

SRCS		:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS		:= $(addprefix $(DIR_OBJS), $(SRCS:.cpp=.o))

INCLUDE		:= -Iinclude

GREEN		= \033[0;32m
RESET		= \033[0m

all: $(NAME)

$(DIR_OBJS)%.o:$(DIR_SRCS)%.cpp
	@mkdir -p $(DIR_OBJS)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✔ $(NAME) Created Successfully!$(RESET)"

clear:
	@rm -rf $(DIR_OBJS)
	@echo "$(GREEN)✔ Objects Cleaned$(RESET)"

fclean: clear
	@rm -f $(NAME)
	@echo "$(GREEN)✔ Executable Cleaned$(RESET)"

re: fclean all

.PHONY: all clear fclean re
