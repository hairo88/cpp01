CXX=g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = Brain

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re