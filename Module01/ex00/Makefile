NAME = ex00
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  src/main.cpp \
		src/Zombie.cpp \
		src/newZombie.cpp \
		src/randomChump.cpp
		
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
