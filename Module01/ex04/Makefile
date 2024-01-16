

NAME		:= Siflosers

SRC			:= main.cpp

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
	@echo "$(PINK)Sed_is_for_losers is removed$(DEF_COLOR)"

re:	fclean all

$(NAME): $(OBJ) Makefile
	${CPP} ${CPPFLAGS} ${OBJ} $(INCLUDE) -o ${NAME}
	@echo "$(PINK)Sed_is_for_losers is compiled$(DEF_COLOR)"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

-include ${DEP}

.PHONY: all clean fclean re