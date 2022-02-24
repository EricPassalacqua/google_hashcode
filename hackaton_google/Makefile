##
## EPITECH PROJECT, 2021
## MakeFile for c++
## File description:
## Makefile
##

SRC	=	main.cpp \
		src/split.cpp \
		src/Parser.cpp \
		src/Contributor.cpp \
		src/Project.cpp

NAME	=	program

all:	$(NAME)

$(NAME):
	   g++ $(SRC) -o $(NAME)

error:
	   g++ $(SRC) -o $(NAME) -Wall -Wextra -std=gnu11

clean:
	   rm -f $(OBJ)

fclean:    clean
	   rm -f $(NAME)

re:	fclean all
