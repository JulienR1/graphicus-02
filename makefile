graphicus-02: src/graphicus-02.cpp tests.o canevas.o couche.o forme.o
	g++ -o graphicus-02 src/graphicus-02.cpp *.o

tests.o: src/tests.cpp includes/tests.h canevas.o
	g++ src/tests.cpp -g -c

canevas.o: src/canevas.cpp includes/canevas.h couche.o
	g++ src/canevas.cpp -g -c

couche.o: src/couche.cpp includes/couche.h forme.o includes/vecteur.h rectangle.o carre.o cercle.o
	g++ src/couche.cpp -g -c

forme.o: src/forme.cpp includes/forme.h includes/coordonnee.h
	g++ src/forme.cpp -g -c

rectangle.o: src/rectangle.cpp includes/rectangle.h forme.o
	g++ src/rectangle.cpp -g -c

carre.o: src/carre.cpp includes/carre.h rectangle.o forme.o
	g++ src/carre.cpp -g -c

cercle.o: src/cercle.cpp includes/cercle.h forme.o
	g++ src/cercle.cpp -g -c

clean:
	rm -f *.o

