# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/13 00:24:54 by brturcio          #+#    #+#              #
#    Updated: 2025/12/13 01:03:48 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= zombieHorde
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g3

DIR_SRCS	:= sources/
DIR_OBJS	:= obj/

SOURCES		:= main.cpp Zombie.cpp zombieHorde.cpp
OBJS		:= $(addprefix $(DIR_OBJS), $(SOURCES:.cpp=.o))

INCLUDE		:= -Iinclude

GREEN		:= \033[0;32m
RESET		:= \033[0m

all: $(NAME)

$(DIR_OBJS)%.o:$(DIR_SRCS)%.cpp
	@mkdir -p $(DIR_OBJS)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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
