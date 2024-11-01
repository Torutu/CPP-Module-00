NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++11

SRC = megaphone.cpp
OBJ = $(OBJ_DIR)/megaphone.o
OBJ_DIR = objects

all: $(NAME)

# Explicit rules for each object file
$(OBJ_DIR)/megaphone.o: megaphone.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c megaphone.cpp -o $(OBJ_DIR)/megaphone.o

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
