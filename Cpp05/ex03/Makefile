# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/17 08:33:34 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	intern_and_coffee

SRC			=	src/main.cpp \
				src/Form.cpp \
				src/Intern.cpp \
				src/Bureaucrat.cpp \
				src/PresidentialPardonForm.cpp \
				src/RobotomyRequestForm.cpp \
				src/ShrubberyCreationForm.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Wshadow -Wno-shadow -Werror -g3 -std=c++98 -fstandalone-debug -Iincld

EXE_NAME	=	-o intern_and_coffee

EXEC		=	intern_and_coffee


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
 
