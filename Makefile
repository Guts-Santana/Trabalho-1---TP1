all: teste.cpp teste.h teste.o entidade.cpp entidade.h entidade.o dominio.cpp dominio.h dominio.o main.cpp
	g++ -std=c++11 -Wall teste.o entidade.o dominio.o main.cpp -o main
	./main

compile: teste.cpp teste.h entidade.cpp entidade.h dominio.cpp dominio.h main.o
	g++ -std=c++11 -Wall teste.o entidade.o dominio.o main.cpp -o main
	

test: main	
	./main
	
teste.o : teste.cpp teste.h
	g++ -std=c++11 -Wall -Wall -c teste.cpp

entidade.o : entidade.cpp entidade.h
	g++ -std=c++11 -Wall -Wall -c entidade.cpp

dominio.o : dominio.cpp dominio.h
	g++ -std=c++11 -Wall -Wall -c dominio.cpp
	
main: 	main.cpp   teste.cpp teste.h entidade.cpp entidade.h dominio.cpp dominio.h  main.o
	g++ -std=c++11 -Wall romanos.o main.cpp -o main

clean:
	rm -rf *.o *.exe *.gc*
	
	