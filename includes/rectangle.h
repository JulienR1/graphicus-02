#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle : public Forme{
public :
	Rectangle (int hauteur = 1, int largeur = 1);
	~Rectangle();

	virtual double aire();
	void setHauteur(int newH);
	void setLargeur(int newL);
	int getHauteur()const;//s
	int getLargeur()const;

private :
	int hauteur,largeur;
}
