
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
