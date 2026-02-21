CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = brain
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: clean all

.PHONY: all clean re
