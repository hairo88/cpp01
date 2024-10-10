CC=g++
CFLAGS= -Wall -Wextra -Werror -std=c++98

TARGET= BraiiiiinnnzzzZ

SRC= main.cpp \
	zombie.cpp \
	newZombie.cpp \
	randomChump.cpp
OBJ= $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re