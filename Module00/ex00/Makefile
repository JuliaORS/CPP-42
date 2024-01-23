# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 15:46:41 by julolle-          #+#    #+#              #
#    Updated: 2024/01/23 15:46:42 by julolle-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:= megaphone

SRC			:= megaphone.cpp

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
	@echo "$(PINK)Megapphone removed$(DEF_COLOR)"

re:	fclean all

$(NAME): $(OBJ) Makefile
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo "$(PINK)Megaphone compiled$(DEF_COLOR)"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: all clean fclean re
