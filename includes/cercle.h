#include <iostream>
#include <cmath>
#include "forme.h"

using namespace std;

class Cercle: public Forme{
public :
	Cercle(Coordonnee ancrage = {0,0}, int rayon = 1);
	~Cercle();

	virtual double aire();
	bool setRayon(int newR);
	int getRayon()const;
  	virtual void afficher(ostream & s);
	  
	bool operator==(const Cercle& b) const{
		return Forme::operator==(b) && getRayon() == b.getRayon();
	}

private :
	int rayon;
};
