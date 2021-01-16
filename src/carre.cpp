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

<<<<<<< HEAD
=======
void Carre::setHauteur(int newH) {
	cote = newH;
}

void Carre::setLargeur(int newL) {
	cote = newL;
}

>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
void Carre::setCote(int newC) {
	cote = newC;
	carre.setHauteur(cote);
	carre.setLargeur(cote);
}

<<<<<<< HEAD
int Carre::getCote()const{
	return cote;
}

void Carre::afficher(ostream & s){
	cout<<"(x="<<Carre.getAncrage().x<<", y="<<Carre.getAncrage().y<<", c="<<Carre.getCote()<<
	", aire="<<Carre.aire()<<")"<<endl;
=======
int Carre::getHauteur()const{
	return cote;
}

int Carre::getLargeur()const{
	return cote;
}

int Carre::getCote()const{
	return cote;
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
}
