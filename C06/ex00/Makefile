NAME = convert

SRCS = main.cpp

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
	@echo Cleaning $(NAME)
	@rm -f $(NAME)

re: fclean all

test:	$(NAME)
	@echo Compiling and testing $(NAME)...
	@echo
	@./$(NAME)

.PHONY: all clean fclean re test
