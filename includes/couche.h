/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#include "vecteur.h"
#include "carre.h"
#include "cercle.h"

class Couche
{
public:
	Couche();
	~Couche();
	enum etat{ Initialisee, Active, Inactive, Cachee };
	bool ajouterForme(Forme* laForme);
	bool translater(int x, int y);
	bool reset();
	bool setEtat(etat);
	Forme* retraitForme(int indexVect);
	Forme* getForme(int indexVect);
	int aireTotale();
	void afficher(ostream & s);
	etat getState() const;

private:
	Vecteur<Forme*> vecteur;
	int aireCouche;
	etat etatCouche;
};

#endif
