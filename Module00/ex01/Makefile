# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 15:43:43 by julolle-          #+#    #+#              #
#    Updated: 2023/11/16 15:43:54 by julolle-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook

SRC			:= main.cpp contact.cpp

OBJ			:= $(SRC:.cpp=.o)
DEP			:= $(SRC:.cpp=.d)

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
	@echo "$(PINK)Phonebook removed$(DEF_COLOR)"

re:	fclean all

$(NAME): $(OBJ) Makefile
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo "$(PINK)Phonebook compiled$(DEF_COLOR)"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: all clean fclean re
