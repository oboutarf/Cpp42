# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 14:11:44 by oboutarf          #+#    #+#              #
#    Updated: 2023/03/27 15:12:51 by oboutarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	btc

SRC			=	main.cpp \
				BitcoinExchange.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	clang++

FLAGS		=	-Wall -Wextra -Wshadow -Wno-shadow -Werror -g3 -std=c++98 -fstandalone-debug -I.

EXE_NAME	=	-o btc

EXEC		=	btc


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
 
