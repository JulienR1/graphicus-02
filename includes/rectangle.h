#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle : public Forme {
public :
	Rectangle (int hauteur = 1, int largeur = 1);
	~Rectangle();

	virtual double aire();
	bool setHauteur(int newH);
	bool setLargeur(int newL);
	int getHauteur()const;
	int getLargeur()const;
  	virtual void afficher(ostream & s);
	  
private :
	int hauteur,largeur;
};
