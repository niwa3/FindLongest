CC = g++
CFLAGS = -g -Wall -lgtest_main -lgtest -lpthread

ALL: test.o find_longest_word.o
	$(CC) $(CFLAGS) -o test test.o find_longest_word.o

test.o: test.cpp
	$(CC) $(CFLAGS) -o test.o -c test.cpp

find_longest_word.o: find_longest_word.cpp find_longest_word.h
	$(CC) $(CFLAGS) -o find_longest_word.o -c find_longest_word.cpp

clean:
	rm test test.o find_longest_word.o
