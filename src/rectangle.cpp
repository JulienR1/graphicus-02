#include "../includes/rectangle.h"

Rectangle::Rectangle(int h, int l){
	hauteur = h;
	largeur = l;
}

Rectangle::~Rectangle(){
}

double Rectangle::aire(){
	double surface;
	surface = hauteur * largeur;
	return surface;
}

void Rectangle::setHauteur(int newH) {
	hauteur = newH;
}

void Rectangle::setLargeur(int newL) {
	largeur = newL;
}

int Rectangle::getHauteur()const{
	return hauteur;
}

int Rectangle::getLargeur()const{
	return largeur;
}
