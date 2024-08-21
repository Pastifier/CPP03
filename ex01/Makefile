# Program
NAME := scavTrap

# Necessities
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

# Targets
SRC := ClapTrap.cpp main.cpp ScavTrap.cpp
INCLUDES := $(SRC:.cpp=.hpp)

# Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) -o $@ $(CXXFLAGS) $(SRC)

clean:
	rm -rf $(NAME)

re: clean all
