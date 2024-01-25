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

NAME		:= fragtrap

SRC			:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ_PATH	:= objs/
OBJ			= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))
DEP			= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.d))

CPP			:= g++ -std=c++98

CPPFLAGS	:= -Wall -Wextra -Werror -MMD -Wshadow -Wno-shadow

RM			:= @rm -rf


all:	$(NAME)

$(NAME): $(OBJ) 
	${CPP} ${CPPFLAGS} ${OBJ} ${INCLUDE} -o ${NAME}
	@echo "$(PINK)Fragtrap compiled$(DEF_COLOR)"

-include $(DEP)

$(OBJ_PATH)%.o:	%.cpp Makefile
	@mkdir -p $(dir $@)
	$(CPP) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJ_PATH) > /dev/null
	@echo "$(PINK)Objects removed$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME) > /dev/null
	@echo "$(PINK)Fragtrap removed$(DEF_COLOR)"

re:	fclean all

.PHONY: all clean fclean re
