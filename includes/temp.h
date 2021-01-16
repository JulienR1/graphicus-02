#include "forme.h"

class Rectangle : public Forme{
    public:
        Rectangle(int l = 0, int h = 0);
        virtual double aire();
        virtual void afficher(ostream & s);
};

class Carre : public Rectangle{
    public:
        Carre(int l = 0);
        virtual double aire();
        virtual void afficher(ostream & s);
};

class Cercle : public Forme{
    public:
        Cercle(int r = 0);
        virtual double aire();
        virtual void afficher(ostream & s);
};