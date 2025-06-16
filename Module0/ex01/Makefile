NAME = ex01
CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS = 	src/main.cpp \
		src/Contact.cpp \
		src/PhoneBook.cpp

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
