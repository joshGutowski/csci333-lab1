CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

fibSum: fibSum.cpp
	$(CC) $(CFLAGS) -o fibSum fibSum.cpp

clean:
	rm -f *~