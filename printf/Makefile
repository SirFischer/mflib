# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 10:13:41 by kle-van-          #+#    #+#              #
#    Updated: 2019/02/22 12:14:22 by mfischer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
TESTNAME	=	Test

#

INC_PATH	=	include/
SRCS		=	src/ft_printf.c \
				src/ft_parse.c \
				src/ft_s.c \
				src/ft_dispatch.c \
				src/ft_f.c \
				src/ft_dui.c \
				src/ft_p.c \
				src/ft_s.c \
				src/ft_o.c \
				src/ft_c.c \
				src/ft_x.c \
				src/ft_na.c \
				src/ft_get.c \
				src/ft_percent_func.c \
				src/ft_subparse.c \
				src/ft_float_utils.c
LIBFUNCS	=	libft/ft_atoi.c\
				libft/ft_bzero.c\
				libft/ft_isdigit.c\
				libft/ft_itoa.c\
				libft/ft_putendl.c\
				libft/ft_putnbr.c\
				libft/ft_putstr.c\
				libft/ft_strcat.c\
				libft/ft_strchr.c\
				libft/ft_strcpy.c\
				libft/ft_strdup.c\
				libft/ft_strjoin.c\
				libft/ft_strlen.c\
				libft/ft_strncat.c\
				libft/ft_strncpy.c\
				libft/ft_strnew.c\
				libft/ft_strrchr.c\
				libft/ft_strtoupper.c\
				libft/ft_toupper.c \
				libft/ft_putchar.c \
				libft/ft_unsigned_itoa.c
MAIN		=	main.c
#

CC			=	gcc
CFLAGS		+=	-Wall -Werror -Wextra
CFLAGS		+=	$(foreach d, $(INC_PATH), -I$d)
TESTFLAGS	+=  $(foreach d, $(INC_PATH), -I$d)
OBJS		=	$(patsubst src/%.c,obj/%.o,$(SRCS))
OBJS		+=	$(patsubst libft/%.c,obj/%.o,$(LIBFUNCS))
RM			=	rm -rf

#

all			:	$(OBJS) $(NAME)

$(OBJS)		:	| obj

obj			:
			@mkdir -p $@

obj/%.o		:	src/%.c 
			@echo "\033[31m--| Creation du $@ |--\033[0m"
			$(CC) $(CFLAGS) -c $< -o $@
			@echo "\033[32m[DONE]\033[0m"

obj/%.o		: libft/%.c
			@echo "\033[31m--| Creation du $@ |--\033[0m"
			$(CC) $(CFLAGS) -c $< -o $@
			@echo "\033[32m[DONE]\033[0m"

$(NAME)		:	$(OBJS)
			@echo "\033[31m--| Creation de la libftprintf.a |--\033[0m"
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
			@echo "\033[32m[DONE]\033[0m\n"

printtest	:	$(NAME)
			clear
			@echo "\n\n\t\t\033[33m--| PHASE DE TEST |--\033[0m\n"
			@$(CC) $(TESTFLAGS) -o $(TESTNAME) $(MAIN) $(NAME)
			@echo " "
			./Test
			@echo " "
			@echo "\n\t\t\t\033[33m[DONE]\033[0m\n\n"

testclean	:
			@echo "\033[31m--| Suppression de Test |--\033[0m\n"
			$(RM) $(TESTNAME)
			@echo "\n\033[32m[DONE]\033[0m\n"

clean		:
			@echo "\033[31m--| Suppression des .o |--\033[0m"
			@echo " "
			$(RM) $(OBJS)
			@echo " "
			$(RM) obj
			@echo "\n\033[32m[DONE]\033[0m\n"

fclean		:	clean testclean
			@echo "\033[31m--| Suppression de la libftprintf.a |--\033[0m\n"
			$(RM) $(NAME)
			@echo "\n\033[32m[DONE]\033[0m\n"

re			:	fclean all

.PHONY		:	clean fclean re all printtest testclean
