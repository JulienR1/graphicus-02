#include <iostream>
#include "forme.h"

using namespace std;

class Rectangle : public Forme {
public :
	Rectangle (int hauteur = 1, int largeur = 1);
	~Rectangle();

	virtual double aire();
<<<<<<< HEAD
	bool setHauteur(int newH);
	bool setLargeur(int newL);
	int getHauteur()const;//s
=======
	void setHauteur(int newH);
	void setLargeur(int newL);
	int getHauteur()const;
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
	int getLargeur()const;
<<<<<<< HEAD
	virtual void afficher(ostream & s);

=======
  	virtual void afficher(ostream & s);
	  
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e
private :
	int hauteur,largeur;
};