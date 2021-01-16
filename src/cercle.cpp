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

int Rectangle::getRayon()const{
	return rayon;
}

void Cercle::afficher(ostream & s){
	cout<<"(x="<<Cercle.getAncrage().x<<", y="<<Cercle.getAncrage().y<<", r="<<Carre.getRayon()<<
	", aire="<<Cercle.aire()<<")"<<endl;
}

