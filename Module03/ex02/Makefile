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

NAME		:= clapscavfragtrap

SRC			:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp 

OBJ			:= $(SRC:.cpp=.o)
DEP			:= $(SRC:.cpp=.d)

INCLUDE		:= 

CPP			:= g++ -std=c++98

CPPFLAGS	:= -Wall -Wextra -Werror -MMD

RM			:= @rm -fv


all:	$(NAME)

clean:
	$(RM) $(OBJ) $(DEP) > /dev/null
	@echo "$(PINK)Objects removed$(DEF_COLOR)"

fclean: 
	$(RM) $(OBJ) $(DEP) > /dev/null
	$(RM) $(NAME) > /dev/null
	@echo "$(PINK) FragTrap removed$(DEF_COLOR)"

re:	fclean all

$(NAME): $(OBJ) Makefile
	${CPP} ${CPPFLAGS} ${OBJ} $(INCLUDE) -o ${NAME}
	@echo "$(PINK)FragTrap compiled$(DEF_COLOR)"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

-include ${DEP}

.PHONY: all clean fclean re
