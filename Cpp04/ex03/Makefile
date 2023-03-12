# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/12 11:25:59 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	gameOfMateria

SRC			=	src/Ice.cpp \
				src/main.cpp \
				src/Cure.cpp \
				src/AMateria.cpp \
				src/Character.cpp \
				src/MateriaSource.cpp
				

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		= -Iincld -g3 -std=c++98 -fstandalone-debug
# -Wall -Wextra -Werror
EXE_NAME	=	-o gameOfMateria

EXEC		=	gameOfMateria


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

run:	all
	./${NAME}

re:	fclean all run
 
