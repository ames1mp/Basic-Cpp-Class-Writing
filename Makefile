CC = clang++
CFLAGS = -std=c++11
INCLUDE_DIRS = -I./include
TARGET_SOURCES = ./src/concert.cpp ./src/main.cpp
EXECUTABLE = con

all: target tests

$(EXECUTABLE): 
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(TARGET_SOURCES) -o $(EXECUTABLE)

clean:
	rm $(EXECUTABLE)