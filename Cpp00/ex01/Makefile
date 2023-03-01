# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 11:33:15 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/02 00:46:07 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRC			=	src/action.cpp \
				src/contact.cpp \
				src/phonebook.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Werror -g3 -I. -std=c++98

EXE_NAME	=	-o phonebook

EXEC		=	phonebook


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all
