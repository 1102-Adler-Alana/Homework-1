transport: main.o people.o cargo.o 
	g++ -o transport main.o people.o cargo.o 

main.o: main.cpp cargo.h people.h
	g++ -c main.cpp

people.o: people.cpp people.h
	g++ -c people.cpp

cargo.o: cargo.cpp cargo.h
	g++ -c cargo.cpp

clean:
	rm -f *.o transport
