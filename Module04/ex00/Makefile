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

NAME		:= catsDogs

HEADER_PATH	:= inc/
HEADER		:=	$(addprefix -I,$($(HEADER_PATH)))

SRC_PATH	:= src/
SRC			:= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ_PATH	:= objs/
OBJ			= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))
DEP			= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.d))

CPP			:= g++ -std=c++98

CPPFLAGS	:= -Wall -Wextra -Werror -MMD -Wshadow -Wno-shadow

RM			:= @rm -rf


-include $(DEP)

all:	$(NAME)

$(NAME): $(OBJ)
	${CPP} ${CPPFLAGS} ${OBJ} ${INCLUDE} $(HEADER) -o ${NAME}
	@echo "$(PINK)Cats and Dogs compiled$(DEF_COLOR)"

$(OBJ_PATH)%.o:	$(SRC_PATH)%.cpp Makefile
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) $(INCLUDE) $(HEADER) -c $< -o $@

clean:
	$(RM) $(OBJ_PATH) > /dev/null
	@echo "$(PINK)Objects removed$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME) > /dev/null
	@echo "$(PINK)Cats and Dogs removed$(DEF_COLOR)"

re:	fclean all

.PHONY: all clean fclean re
