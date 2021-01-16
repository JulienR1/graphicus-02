#include "../includes/cercle.h"

Cercle::Cercle(int r){
	setRayon(r);
}

Cercle::~Cercle(){
}

double Cercle::aire(){
	double surface;
	surface = M_PI * (rayon * rayon);
	return surface;
}

bool Cercle::setRayon(int newR) {
	if(newR > 0){
		rayon = newR;
		return true;
	}
	rayon = 1;
	return false;
}

int Cercle::getRayon()const{
	return rayon;
}

void Cercle::afficher(std::ostream&){

}