NAME = ex02
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =  src/main.cpp \
		src/Bureaucrat.cpp \
		src/Form.cpp \
		src/ShrubberyCreationForm.cpp \
		src/PresidentialPardonForm.cpp \
		src/RobotomyRequestForm.cpp \
		
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
