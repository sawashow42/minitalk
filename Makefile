# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 00:09:46 by shsawaki          #+#    #+#              #
#    Updated: 2022/10/06 02:12:50 by shsawaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SERVER = server
CLIENT = client

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
FT_PRINTF_PATH = ./ft_printf
FT_PRINTF = $(FT_PRINTF_PATH)/libftprintf.a

SERVER_SRC = server.c
CLIENT_SRC = client.c
SEVRER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SERVER) $(CLIENT)

$(SERVER) : $(SEVRER_OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) -o $@ $(CFLAGS) $(SERVER_SRC) $(LIBFT) $(FT_PRINTF)

$(CLIENT) : $(CLIENT_OBJ) $(LIBFT)
	$(CC) -o $@ $(CFLAGS) $(CLIENT_SRC) $(LIBFT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_PATH)

clean:
	$(RM) ./*.o $(LIBFT_PATH)/*.o $(FT_PRINTF_PATH)/*.o

fclean : clean
	$(RM) $(CLIENT) $(SERVER) $(LIBFT) $(FT_PRINTF)

re: fclean all

.PHONY : all clean fclean re