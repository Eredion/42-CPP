NAME = phonebook

SRCS = phonebook.cpp classcontact.cpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CLANG) $(FLAGS) $(SRCS) -c
	$(CLANG) $(OBJS) -o $(NAME)
	@echo Done!

clean:
	@echo Cleaning objects
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning megaphone
	@rm -f $(NAME)

re: fclean all

test:	$(NAME)
	./$(NAME)

.PHONY: all clean fclean re test
