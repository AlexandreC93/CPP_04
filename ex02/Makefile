NAME		= AAnimal
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -g
RM			= rm -rf

OBJDIR = .obj

FILES		= AAnimal Cat Dog WrongCat Brain WrongAnimal main

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "Exec ready\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "Objs removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "Exec removed\n"

re: fclean all

.PHONY: all clean fclean re