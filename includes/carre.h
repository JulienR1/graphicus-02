#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle{
public :
	Carre (int cote = 1);
	~Carre();

	virtual double aire();
	void setCote(int newC);
	int getCote()const;
	virtual void afficher(ostream & s);

private :
	int cote;
}
