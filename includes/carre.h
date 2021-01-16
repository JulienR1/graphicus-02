#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle {
public :
	Carre (int cote = 1);
	~Carre();

	virtual double aire();
<<<<<<< HEAD
	bool setHauteur(int newH);
	bool setLargeur(int newL);
	bool setCote(int newC);
	int getHauteur()const;
	int getLargeur()const;
=======
	void setCote(int newC);
>>>>>>> f848739430aada347a915c873a0dc3e13bc33e2c
	int getCote()const;
<<<<<<< HEAD
	virtual void afficher(ostream & s);
=======
  	virtual void afficher(ostream & s);
>>>>>>> 2aa4b086627df30c7a3c5b3ef14c7bf250374a9e

private :
	int cote;
};
