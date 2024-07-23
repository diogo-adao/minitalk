# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 16:34:34 by diolivei          #+#    #+#              #
#    Updated: 2024/07/23 15:11:00 by diolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atoi.c ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
NO_COLOR	=	\033[0m

all: $(NAME)
	@sleep 0.5
	@echo "\n📚 $(BOLD_PURPLE)Libft compiled.$(NO_COLOR)\n"

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@sleep 0.5
	@echo "\n🧹 $(BOLD_CYAN)Libft cleaned.$(NO_COLOR)\n"

fclean: clean
	@rm -f $(NAME)

re:
	@fclean $(NAME)

.c.o:
	@${CC} ${CFLAGS} -I include -c $< -o ${<:.c=.o} \

.PHONY: all clean fclean re
