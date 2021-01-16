/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "../includes/canevas.h"

Canevas::Canevas()
{
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   return false;
}

bool Canevas::activerCouche(int index)
{
   return false;
}

bool Canevas::cacherCouche(int index)
{
   return false;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   return false;
}

bool Canevas::retirerForme(int index)
{
   return false;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return false;
}

void Canevas::afficher(ostream & s)
{
}

Couche* Canevas::getCoucheForTests(){
   return couches;
}
