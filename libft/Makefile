# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:23:17 by lede-ser          #+#    #+#              #
#    Updated: 2015/12/18 17:23:00 by lede-ser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

_SRCS	=	ft_strlen.c	\
			ft_strdup.c \
			ft_isalpha.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_memset.c \
			ft_putnbr.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_itoa.c \
			ft_itoa_base.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_abs.c \
			ft_isneg.c \
			ft_nbrlen.c \
			ft_nbrlen_base.c \
			ft_wordlen.c \
			ft_wordcount.c \
			ft_putendl_fd.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c

SRCS    = $(addprefix srcs/,$(_SRCS))

OBJS	= $(subst .c,.o,$(_SRCS))

CFLAGS	= gcc -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	@mkdir bin
	@$(CFLAGS) $(SRCS) -I includes
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@mv $(OBJS) bin/
	@echo "library FT compilled"

clean:
	@rm -rf bin
	@echo "Clean all .o files"

fclean: clean
	@echo "clean all .o and .a"
	@rm -f $(NAME)
	@/bin/rm -f $(OBJS)

re: fclean all
