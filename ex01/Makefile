NAME		= Woof
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -g3
RM			= rm -rf

OBJDIR = .obj

FILES		= Animal Cat Dog WrongCat Brain WrongAnimal main

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp Brain.hpp WrongCat.hpp


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