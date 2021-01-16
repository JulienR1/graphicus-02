#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle {
public :
	Carre (int cote = 1);
	~Carre();

	virtual double aire();
	bool setHauteur(int newH);
	bool setLargeur(int newL);
	bool setCote(int newC);
	int getHauteur()const;
	int getLargeur()const;
	int getCote()const;
  	virtual void afficher(ostream & s);

private :
	int cote;
};
