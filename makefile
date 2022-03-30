pas3: main.o Account.o Money.o 
	g++ -std=c++11 -o pa3 main.o Money.o
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
Account.o: Account.cpp
	g++ -std=c++11 -c Account.cpp
Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp
clean:
	rm -f pas3 *.o