
# Colors used for terminal output.
GREEN = \033[0;32m
BLUE = \033[0;34m
ORANGE = \033[38;5;214m
RED = \033[0;31m
YELLOW = \033[0;33m
WHITE = \033[0;37m
RESET = \033[0m

# Library Name
NAME = megaphone

# Complier and Flags
CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++17

# Source file(s)
SRC = megaphone.cpp

# Main Target
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) -o $(NAME) $(SRC)
	@echo "$(GREEN)** $(NAME) Successfully Compiled! **$(RESET)"

clean:
	@if [ -f "$(NAME)" ]; then \
		rm -f $(NAME); \
		echo "$(YELLOW)** $(NAME) Cleaned! **$(RESET)"; \
	fi

fclean: clean

re: fclean all

.PHONY: all clean fclean re
