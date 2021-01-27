a.out : main.o user.o word.o word_data.o
	g++ main.o user.o word.o word_data.o -o a.out
main.o : main.cpp user.h word.h word_data.h
	g++ -c main.cpp
user.o : user.cpp user.h
	g++ -c user.cpp
word.o : word.cpp word.h
	g++ -c -std=c++11 word.cpp
word_data.o : word_data.cpp word_data.h
	g++ -c word_data.cpp
clean :
	rm -f *.o

