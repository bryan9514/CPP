# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 08:28:39 by brturcio          #+#    #+#              #
#    Updated: 2025/12/07 01:13:55 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= PhoneBook
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g3

DIR_OBJ		:= obj/
DIR_SRCS	:= sources/

SOURCES		:= main.cpp Contact.cpp PhoneBook.cpp PhoneBookUtils.cpp
OBJECTS		:= $(addprefix $(DIR_OBJ), $(SOURCES:.cpp=.o))

INCLUDE		:= -Iinclude

GREEN		= \033[0;32m
RESET		= \033[0m

all: $(NAME)

$(DIR_OBJ)%.o:$(DIR_SRCS)%.cpp
	@mkdir -p $(DIR_OBJ)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)✔ $(NAME) Created Successfully! $(RESET)"

clean:
	@rm -rf $(DIR_OBJ)
	@echo "$(GREEN)✔ Objects cleaned$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)✔ Executable Cleaned$(RESET)"

re: fclean all

.PHONY: all clean fclean re
