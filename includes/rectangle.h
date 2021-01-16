#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle : public Forme {
public :
	Rectangle (int hauteur = 1, int largeur = 1);
	~Rectangle();

	virtual double aire();
	void setHauteur(int newH);
	void setLargeur(int newL);
	int getHauteur()const;
	int getLargeur()const;
<<<<<<< HEAD
	virtual void afficher(ostream & s);

=======
  	virtual void afficher(ostream & s);
	  
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
private :
	int hauteur,largeur;
};