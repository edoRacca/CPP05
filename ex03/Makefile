
NAME = form

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

CC = c++

FLAGS = -std=c++98 -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $^ -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re