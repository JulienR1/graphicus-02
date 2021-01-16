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
	couches[0].setEtat(Couche::etat::Active);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for(int i=0; i<MAX_COUCHES; i++){
		if(couches[i].reset() != true){
			return false;
		}
	}
	couches[0].setEtat(Couche::etat::Active);
	return true;
}

bool Canevas::activerCouche(int index)
{
	for(int i=0; i<MAX_COUCHES; i++){
		if(couches[i].isActive() == true){
			if(couches[i].setEtat(Couche::etat::Inactive) == false){
				return false;
			}
		}
	}
	return couches[index].setEtat(Couche::etat::Active);
}

bool Canevas::cacherCouche(int index)
{
	return couches[index].setEtat(Couche::etat::Cachee);	
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	for(int i=0; i<MAX_COUCHES; i++){
		if(couches[i].isActive() == true){
			return couches[i].ajouterForme(p_forme);
		}
	}
	return false;
}

bool Canevas::retirerForme(int index)
{
	for(int i=0; i<MAX_COUCHES; i++){
		if(couches[i].isActive() == true){
			if(couches[i].retraitForme(index) != nullptr){
				return true;
			}
		}
	}
	return false;
}

double Canevas::aire()
{
	double aireCan = 0;
	for(int i=0; i<MAX_COUCHES; i++){
		aireCan += couches[i].aire();
	}
	return aireCan;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	for(int i=0; i<MAX_COUCHES; i++){
		if(couches[i].isActive() == true){
			return couches[i].translater(deltaX, deltaY);
		}
	}
	return false;
}

void Canevas::afficher(ostream & s)
{
	for(int i=0; i<MAX_COUCHES; i++){
		cout<<"----- Couche "<<i<<endl;
		couches[i].afficher(cout);
	}
}

Couche* Canevas::getCoucheForTests(){
   return couches;
}
