CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp