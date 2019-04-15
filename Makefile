# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 23:36:53 by mfischer          #+#    #+#              #
#    Updated: 2019/04/15 15:36:13 by mfischer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mflib.a

#

INC_PATH	=	include/
SRCS		=	src/math/mat_copy.c src/math/mat_scale.c src/math/mat_translate.c \
				src/math/matmat_multiply.c src/math/matrix_clear.c src/math/matrix_init.c \
				src/math/matvec_multiply.c src/math/vec_add.c src/math/vec_conversions.c \
				src/math/vec_crossproduct.c src/math/vec_dot.c src/math/vec_magnitude.c \
				src/math/vec_normalize.c src/math/vec_substract.c src/math/vector_clear.c \
				src/math/vector_init.c src/math/mat4_rotate.c src/math/vec_copy.c \
				src/math/vecscalar_multiply.c \
				src/string/mf_itoa.c src/string/mf_itoa_s.c \
				src/files/get_next_line.c \
				src/list/mf_lstadd.c src/list/mf_lstcount.c src/list/mf_lstdel.c \
				src/list/mf_lstdelone.c src/list/mf_lstiter.c src/list/mf_lstmap.c \
				src/list/mf_lstnew.c

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
		@mkdir	-p $@/math
		@mkdir	-p $@/string
		@mkdir	-p $@/files
		@mkdir	-p $@/list

obj/%.o		:	src/%.c
		@echo	"\033[31m--| Creation du $@ |--\033[0m"
		$(CC)	$(CFLAGS) -I $(INC_PATH) -c $< -o $@
		@echo	"\033[32m[DONE]\033[0m"

$(NAME)		:	$(OBJS)
		@echo	"\033[31m--| Creation de mylib.a : $@ |--\033[0m"
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

