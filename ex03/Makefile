# Program
NAME := diamondTrap

# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

# Targets
SRC := DiamondTrap.cpp main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
INCLUDES := $(SRC:.cpp=.hpp)

# Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) -o $@ $(CXXFLAGS) $(SRC)
	@printf "$(GREEN)Compilation successful!$(RESET)\n"

clean:
	rm -rf $(NAME)
	@printf "$(YELLOW)Executable removed.$(RESET)\n"

ifeq ($(valgrind_answer),y)
valgrind:
	@printf "$(CURSIVE)Running valgrind...$(RESET)\n"
	valgrind --leak-check=full ./$(NAME)
endif

re: clean all

.PHONY: all clean re
