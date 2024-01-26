NAME	= Woof
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


all: $(NAME)

$(NAME): 
	@printf "$(GRAY)-Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp -o $(NAME)
	@printf "Executable ready.\n"

clean:
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

fclean:
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

re: clean all

.PHONY: all clean re