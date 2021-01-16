#include "../includes/carre.h"

Carre::Carre(int c){
	setCote(c);
}

Carre::~Carre(){
}

double Carre::aire(){
	double surface;
	surface = cote * cote;
	return surface;
}


bool Carre::setHauteur(int newH) {
	return setCote(newH);
}

bool Carre::setLargeur(int newL) {
	return setCote(newL);
}

bool Carre::setCote(int newC) {
	if(newC > 0){
		cote = newC;
		return true;
	}
	cote = 1;
	return false;
}

int Carre::getCote()const{
	return cote;
}

void Carre::afficher(ostream & s){
	cout<<"(x="<<getAncrage().x<<", y="<<getAncrage().y<<", c="<<getCote()<<
	", aire="<<aire()<<")"<<endl;
}

