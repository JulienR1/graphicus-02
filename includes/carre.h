#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle{
public :
	Carre(Coordonnee ancrage = {0,0}, int cote = 1);
	~Carre();

	virtual double aire();
	bool setCote(int newC);
	int getCote()const;
	virtual bool setHauteur(int newH);
	virtual bool setLargeur(int newL);
  	virtual void afficher(ostream & s);

	bool operator==(const Carre& b) const{
		return Rectangle::operator==(b) && getCote() == b.getCote();
	}

private :
	int cote;
};
