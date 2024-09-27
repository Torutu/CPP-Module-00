NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++2b

SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ_DIR = Os
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/PhoneBook.o $(OBJ_DIR)/Contact.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

# Explicit rules for each object file
$(OBJ_DIR)/main.o: main.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c main.cpp -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/PhoneBook.o: PhoneBook.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c PhoneBook.cpp -o $(OBJ_DIR)/PhoneBook.o

$(OBJ_DIR)/Contact.o: Contact.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c Contact.cpp -o $(OBJ_DIR)/Contact.o

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
