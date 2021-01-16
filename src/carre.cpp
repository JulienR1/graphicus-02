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

<<<<<<< HEAD
bool Carre::setHauteur(int newH) {
	return setCote(newH);
=======
<<<<<<< HEAD
=======
void Carre::setHauteur(int newH) {
	cote = newH;
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
}

bool Carre::setLargeur(int newL) {
	return setCote(newL);
}

<<<<<<< HEAD
bool Carre::setCote(int newC) {
	if(newC > 0){
		cote = newC;
		return true;
	}
	cote = 1;
	return false;
=======
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
void Carre::setCote(int newC) {
	cote = newC;
	carre.setHauteur(cote);
	carre.setLargeur(cote);
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
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

void Carre::afficher(std::ostream&){

}