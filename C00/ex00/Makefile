NAME = megaphone

SRCS = megaphone.cpp

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
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)

.PHONY: all clean fclean re test
