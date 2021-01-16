#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle{
public :
	Carre (int cote = 1);
	~Carre();

	virtual double aire();
	void setHauteur(int newH);
	void setLargeur(int newL);
	void setCote(int newC);
	int getHauteur()const;
	int getLargeur()const;
	int getCote()const;

private :
	int cote;
}
