a.out : main.o user.o word.o
	g++ main.o user.o word.o -o main.out
main.o : main.cpp user.h word.h
	g++ -c main.cpp
user.o : user.cpp user.h
	g++ -c user.cpp
word.o : word.cpp word.h
	g++ -std=c++11 word.cpp
clean :
	rm -f *.o

