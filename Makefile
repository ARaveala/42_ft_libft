#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:26:09 by araveala          #+#    #+#              #
#    Updated: 2023/11/21 14:57:44 by araveala         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memset.c\
ft_bzero.c  ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c\
ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strmapi.c\
ft_striteri.c ft_atoi.c ft_itoa.c\
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_calloc.c ft_strdup.c ft_substr.c ft_split.c ft_strtrim.c\
ft_strjoin.c

BONUS_CFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OFILES = $(CFILES:.c=.o)
BONUS_OFILES = $(BONUS_CFILES:.c=.o)
CC = cc
CFLAGS = -Wextra -Werror -Wall
NAME = libft.a
AR = ar rcs
RM = rm -f

all: $(NAME) #clean

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

.bonus: $(NAME) $(BONUS_OFILES)
	$(AR) $(NAME) $(BONUS_OFILES)
	touch .bonus

bonus: .bonus

clean:
	$(RM) $(OFILES) $(BONUS_OFILES) .bonus

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
