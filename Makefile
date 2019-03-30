# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 23:36:53 by mfischer          #+#    #+#              #
#    Updated: 2019/03/30 23:43:58 by mfischer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mylib.a

#

INC_PATH	=	include/
SRCS		=	src/main.c

#

CC			=	gcc
CL			=	ar rc
RAN			=	ranlib
CFLAGS		+=	-Wall -Werror -Wextra
CFLAGS		+=	$(foreach d, $(INC_PATH), -I$d)
OBJS		=	$(patsubst src/%.c,obj/%.o,$(SRCS))
RM			=	rm -rf

#

all			:	$(OBJS) $(NAME)

$(OBJS)		:	| obj

obj			:	
		@mkdir	-p $@

obj/%.o		:	src/%.c
		@echo	"\033[31m--| Creation du $@ |--\033[0m"
		$(CC)	$(CFLAGS) -c $< -o $@
		@echo	"\033[32m[DONE]\033[0m"

$(NAME)		:	$(OBJS)
		@echo	"\033[31m--| Creation de mylib.a : $@ |--\033[0m"
		$(CC)	-c $^ -lm
		$(CL)	$(NAME) $^
		$(RAN)	$(NAME)
		@echo	"\033[32m[DONE]\033[0m\n"

clean		:
		@echo	"\033[31m--| Suppression des .0 |--\033[0m"
		$(RM) $(OBJS)
		@echo	"\033[32m[DONE]\033[0m\n"

fclean		:	clean
		@echo	"\033[31m--| Suppression de mylib.a : $(NAME) |--\033[0m"
		$(RM)	$(NAME)
		$(RM)	obj

re			:	fclean all

.PHONY		:	clean fclean re all

