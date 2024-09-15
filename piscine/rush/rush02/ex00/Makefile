
NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
		@cc -Wall -Werror -Wextra main.c - $(NAME)

clean:
		@find . -name $(NAME) -delete

fclean:	clean
		@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete