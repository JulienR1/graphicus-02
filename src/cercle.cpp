#include "../includes/cercle.h"

Cercle::Cercle(int r){
	setRayon(r);
}

Cercle::~Cercle(){
}

double Cercle::aire(){
	double surface;
	surface = M_PI * (rayon * rayon);
	return surface;
}

bool Cercle::setRayon(int newR) {
	if(newR > 0){
		rayon = newR;
		return true;
	}
	rayon = 1;
	return false;
}

int Cercle::getRayon()const{
	return rayon;
<<<<<<< HEAD
}

void Cercle::afficher(std::ostream&){

}
=======
<<<<<<< HEAD
}

void Cercle::afficher(ostream & s){
	cout<<"(x="<<Cercle.getAncrage().x<<", y="<<Cercle.getAncrage().y<<", r="<<Carre.getRayon()<<
	", aire="<<Cercle.aire()<<")"<<endl;
}

=======
}
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
