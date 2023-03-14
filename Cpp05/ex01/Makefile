# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/14 21:58:31 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	signMode

SRC			=	main.cpp \
				Form.cpp \
				Bureaucrat.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Wshadow -Wno-shadow -Werror -g3 -std=c++98 -fstandalone-debug

EXE_NAME	=	-o signMode

EXEC		=	signMode


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
 
