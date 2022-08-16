NAME 	=	minishell

HEADER	=	minishell.h

FLAGS 	=	#-Wextra -Werror -Wall
# FLAGS =	-Wextra -Werror -Wall -fsanitize=address -fsanitize=undefined

SOURCE	=	check_command.c	main.c	\
			src.c			split.c	

OBJECT	=	$(SOURCE:.c=.o)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJECT)
			$(CC) $(OBJECT) -o $(NAME)

%.o		:	%.c $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			$(RM) $(OBJECT)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all