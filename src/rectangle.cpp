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

<<<<<<< HEAD
void Rectangle::afficher(std::ostream&){

}
=======
void Rectangle::afficher(ostream & s){
	cout<<"(x="<<Rectangle.getAncrage().x<<", y="<<Rectangle.getAncrage().y<<", l="<<Rectangle.getLargeur()<<
	", h="<<Rectangle.getHauteur()<<", aire="<<Rectangle.aire()<<")"<<endl;
}
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
