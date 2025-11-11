NAME = RPN
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =  src/main.cpp \
		src/RPN.cpp \

OBJ = $(SRCS:.cpp=.o)

GREEN  = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)✅ Compilation réussie !$(RESET)"


%.o: %.cpp
	$(CC) $(FLAGS) -O3 -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
