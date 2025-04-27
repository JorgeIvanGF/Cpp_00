# Colors for output
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Project name
NAME = phonebook

# Source files
SRC = main.cpp Contact.cpp PhoneBook.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(NAME)

# Rule to build the executable
$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo " $(NAME) $(GREEN) built successfully!$(RESET)"

# Rule to compile .cpp into .o
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean only object files
clean:
	@rm -f $(OBJ)
	@echo "$(YELLOW)🧹 Object files cleaned.$(RESET)"

# Clean object files and executable
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) Executable $(NAME) removed.$(RESET)"

# Recompile everything
re: fclean all

# Special rule to avoid conflicts
.PHONY: all clean fclean re