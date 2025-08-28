NAME = ex01
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  src/main.cpp \
		src/Animal.cpp \
		src/Cat.cpp \
		src/Dog.cpp \
		src/WrongCat.cpp \
		src/WrongAnimal.cpp \
		src/Brain.cpp
		
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -O3 -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
