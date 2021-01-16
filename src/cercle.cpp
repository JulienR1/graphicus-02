#include "../includes/cercle.h"

Cercle::Cercle(Coordonnee ancrage, int r) : Forme(ancrage.x, ancrage.y){
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

void Cercle::afficher(ostream & s){
	cout<<"(x="<<getAncrage().x<<", y="<<getAncrage().y<<", r="<<getRayon()<<
	", aire="<<aire()<<")"<<endl;
}