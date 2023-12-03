##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-W -Wall -Wextra

CFLAGS		= 	-I ./include/ -I $(LIB)include/

LDFLAGS		=	--coverage -lcriterion

SRC_DIR		=	./src/

TEST_DIR	=	./tests/

SRCS		=	$(SRC_DIR)my_printf.c			\
				$(SRC_DIR)my_putchar.c			\
				$(SRC_DIR)my_perror.c			\
				$(SRC_DIR)my_putstr.c			\
				$(SRC_DIR)my_put_nbr.c			\
				$(SRC_DIR)my_put_nbru.c			\
				$(SRC_DIR)my_put_nbr_long.c		\
				$(SRC_DIR)my_put_oct.c			\
				$(SRC_DIR)my_put_hexa.c			\
				$(SRC_DIR)my_put_adrss.c		\
				$(SRC_DIR)my_put_m_hexa.c		\
				$(SRC_DIR)my_put_hexa_large.c	\
				$(SRC_DIR)my_put_bin.c			\
				$(SRC_DIR)my_put_float.c		\

OBJS		=	$(SRCS:.c=.o)

TESTS_OBJS	=	$(TESTS_SRCS:.c=.o)

VAL_TO		=	--track-origins=yes
VAL_SL		=	--show-leak-kinds=all
VAL_LC		=	--leak-check=full

all: $(NAME)
	@echo "Build ok!"

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS) $(LDFLAGS)

debug: MAKE += -E CFLAGS+=-g3
debug: CPPFLAGS += -g3
debug: $(NAME)
	@echo "Build ok!"

clean:
	$(RM) *.html
	$(RM) *.css
	$(RM) $(TEST_DIR)*.gcda
	$(RM) $(TEST_DIR)*.gcno
	$(RM) $(OBJS)
	$(RM) $(TESTS_OBJS)
	@echo "Clean ok!"

fclean: clean
	$(RM) $(NAME)
	@echo "Fclean ok!"

re: fclean all

.PHONY: all build_lib debug tests_run clean fclean re
