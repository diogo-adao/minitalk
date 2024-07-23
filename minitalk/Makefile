# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 17:37:58 by diolivei          #+#    #+#              #
#    Updated: 2024/07/23 15:34:25 by diolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
CLIENT_SRCS = client.c
SERVER_SRCS = server.c
LIBFT_PATH = libft
LIBFT_FILE = $(LIBFT_PATH)/libft.a
CLIENT_NAME = client
SERVER_NAME = server

BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN = \033[1;32m
NO_COLOR	=	\033[0m

all: $(CLIENT_NAME) $(SERVER_NAME)
	@sleep 0.5
	@echo "\n✅ $(BOLD_GREEN)Compilation completed.\n$(NO_COLOR)"
	@echo "  /\_/\  (\n ( ^.^ ) _)\n   \\\"/  (\n ( | | )\n(__d b__)\n"

$(CLIENT_NAME): $(CLIENT_SRCS) $(LIBFT_FILE)
	@$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS) -L$(LIBFT_PATH) -lft
	@sleep 0.5
	@echo "\n🟢 Client ready!\n"

$(SERVER_NAME): $(SERVER_SRCS) $(LIBFT_FILE)
	@$(CC) $(CFLAGS) -o $@ $(SERVER_SRCS) -L$(LIBFT_PATH) -lft
	@sleep 0.5
	@echo "\n🔴 Server ready!\n"

$(LIBFT_FILE):
	@$(MAKE) -C $(LIBFT_PATH)

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean

fclean:
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@rm -f $(CLIENT_NAME) $(SERVER_NAME)
	@sleep 0.5
	@echo "\n💩 $(BOLD_YELLOW)Removed executables.$(NO_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
