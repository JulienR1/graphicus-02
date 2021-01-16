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

int Rectangle::getRayon()const{
	return rayon;
}

void Cercle::afficher(ostream & s){
	cout<<"(x="<<getAncrage().x<<", y="<<getAncrage().y<<", r="<<getRayon()<<
	", aire="<<aire()<<")"<<endl;
}
>>>>>>> 5cbdbb9b324a45fa6a6b4ec0eb02323859160411
