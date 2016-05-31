CC=g++
FLAGS= -std=c++11
EXEC= binaryTree
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) -c $< $(FLAGS) -o $@

clear:
	rm $(EXEC) $(OBJ)
