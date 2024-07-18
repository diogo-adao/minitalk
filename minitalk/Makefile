# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 17:37:58 by diolivei          #+#    #+#              #
#    Updated: 2024/07/18 14:48:33 by diolivei         ###   ########.fr        #
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

all: $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_SRCS) $(LIBFT_FILE)
	$(CC) $(CFLAGS) -o $@ $(CLIENT_SRCS) -L$(LIBFT_PATH) -lft

$(SERVER_NAME): $(SERVER_SRCS) $(LIBFT_FILE)
	$(CC) $(CFLAGS) -o $@ $(SERVER_SRCS) -L$(LIBFT_PATH) -lft

$(LIBFT_FILE):
	$(MAKE) -C $(LIBFT_PATH)

clean:
	$(MAKE) -C $(LIBFT_PATH) clean

fclean:
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(CLIENT_NAME) $(SERVER_NAME)

re: fclean all

.PHONY: all clean fclean re
