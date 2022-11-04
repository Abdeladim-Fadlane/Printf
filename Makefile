# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afadlane <afadlane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 10:42:37 by afadlane          #+#    #+#              #
#    Updated: 2022/11/04 18:03:13 by afadlane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_hexalower.c  \
		ft_hexaupper.c 
OBJ = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
		ar r ${NAME} ${OBJ}

${OBJ} : ${SRCS}
		cc ${CFLAGS} ${SRCS} -c

 clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all
