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

int Cercle::getRayon()const{
	return rayon;
<<<<<<< HEAD
}

void Cercle::afficher(ostream & s){
	cout<<"(x="<<Cercle.getAncrage().x<<", y="<<Cercle.getAncrage().y<<", r="<<Carre.getRayon()<<
	", aire="<<Cercle.aire()<<")"<<endl;
}

=======
}
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
