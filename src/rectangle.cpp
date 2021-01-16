#include "../includes/rectangle.h"

Rectangle::Rectangle(int h, int l){
	setHauteur(h);
	setLargeur(l);
}

Rectangle::~Rectangle(){
}

double Rectangle::aire(){
	double surface;
	surface = hauteur * largeur;
	return surface;
}

bool Rectangle::setHauteur(int newH) {
	if(newH > 0){
		hauteur = newH;
		return true;
	}
	hauteur = 1;
	return false;
}

bool Rectangle::setLargeur(int newL) {
	if(newL > 0){
		largeur = newL;
		return true;
	}
	largeur = 1;
	return false;
}

int Rectangle::getHauteur() const {
	return hauteur;
}

int Rectangle::getLargeur() const {
	return largeur;
}

void Rectangle::afficher(ostream & s){
	cout<<"(x="<<getAncrage().x<<", y="<<getAncrage().y<<", l="<<getLargeur()<<
	", h="<<getHauteur()<<", aire="<<aire()<<")"<<endl;
}
