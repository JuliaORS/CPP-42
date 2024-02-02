# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 19:54:40 by julolle-          #+#    #+#              #
#    Updated: 2024/01/23 19:54:40 by julolle-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= abstractAnimal

HEADER		:= ./inc/

SRC_PATH	:= ./src/
SRC_FILES	:= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
SRC			:= $(addprefix $(SRC_PATH),$(SRC_FILES))

OBJ_PATH	:= objs/
OBJ			:= $(addprefix $(OBJ_PATH),$(SRC:$(SRC_PATH)%.cpp=%.o))
DEP			:= $(addprefix $(OBJ_PATH),$(SRC:$(SRC_PATH)%.cpp=%.d))

CPP			:= g++ -std=c++98

CPPFLAGS	:= -Wall -Wextra -Werror -MMD -Wshadow -Wno-shadow

RM			:= @rm -rf


all:	$(NAME)

$(NAME): $(OBJ)
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo "$(PINK)abstractAnimal compiled$(DEF_COLOR)"

-include $(DEP)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.cpp Makefile
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) -I$(HEADER) -c $< -o $@	

clean:
	$(RM) $(OBJ_PATH) > /dev/null
	@echo "$(PINK)Objects removed$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME) > /dev/null
	@echo "$(PINK)abstractAnimal removed$(DEF_COLOR)"

re:	fclean all

.PHONY: all clean fclean re
