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

void Carre::setCote(int newC) {
	cote = newC;
	carre.setHauteur(cote);
	carre.setLargeur(cote);
}

int Carre::getCote()const{
	return cote;
}

void Carre::afficher(ostream & s){
	cout<<"(x="<<Carre.getAncrage().x<<", y="<<Carre.getAncrage().y<<", c="<<Carre.getCote()<<
	", aire="<<Carre.aire()<<")"<<endl;
}
