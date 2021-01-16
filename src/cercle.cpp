#include "../includes/cercle.h"

Cercle::Cercle(int r){
	rayon = r;
}

Cercle::~Cercle(){
}

double Cercle::aire(){
	double surface;
	surface = M_PI * (rayon * rayon);
	return surface;
}

void Cercle::setRayon(int newR) {
	rayon = newR;
}

int Cercle::getRayon()const{
	return rayon;
}

