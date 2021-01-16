#include "../includes/carre.h"

Carre::Carre(int c){
	cote = c;
}

Carre::~Carre(){
}

double Carre::aire(){
	double surface;
	surface = cote * cote;
	return surface;
}

void Carre::setHauteur(int newH) {
	cote = newH;
}

void Carre::setLargeur(int newL) {
	cote = newL;
}

void Carre::setCote(int newC) {
	cote = newC;
}

int Carre::getHauteur()const{
	return cote;
}

int Carre::getLargeur()const{
	return cote;
}

int Carre::getCote()const{
	return cote;
}
