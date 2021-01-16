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

void Rectangle::setHauteur(int newH) {
	cote = newH;
}

void Rectangle::setLargeur(int newL) {
	cote = newL;
}

void Rectangle::setCote(int newC) {
	cote = newC;
}

int Rectangle::getHauteur()const{
	return cote;
}

int Rectangle::getLargeur()const{
	return cote;
}

int Rectangle::getCote()const{
	return cote;
}
