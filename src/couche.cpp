/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "../includes/couche.h"

Couche::Couche(){
	aireCouche = 0;
	etatCouche = Initialisee;
}

Couche::~Couche(){
}

bool isActive(){
	return etatCouche == Active;
}

bool Couche::ajouterForme(Forme* laForme){
	if (etatCouche == Active){
		if(vecteur.append(laForme) == true){
			return true;
		}
		else{
			return false;
		}
	}
	return false;
}

bool Couche::translater(int deltaX, int deltaY){
	if (etatCouche == Active){
		for(int i=0; i<vecteur.size(); i++){ //Faut faire un bool, avec quoi je sais pas
			(*(vecteur.readAt(i)))->translater(deltaX, deltaY);//Pointeur attention a verifier
		}
		return true;
	}
	else{
		return false;
	}
}

bool Couche::reset(){
	etatCouche = Initialisee;
	if(etatCouche != Initialisee){
		return false;
	}
	aireCouche = 0;
	try{
		for(int i=0; i<vecteur.size(); i++){ 
			delete (*(vecteur.readAt(i)));//Pointeur attention a verifier
		}
	}
	catch(std::exception e){
		return false;
	}
	return vecteur.clear();
}

bool Couche::setEtat(etat lEtat){
	
	if (lEtat == Active){
		etatCouche = Active;
		if(etatCouche != Active){
			return false;
		}
	}
	if (lEtat == Inactive){
		etatCouche = Inactive;
		if(etatCouche != Inactive){
			return false;
		}
	}
	if (lEtat == Cachee){
		etatCouche = Cachee;
		if(etatCouche != Cachee){
			return false;
		}
		aireCouche = 0;
	}
	return true;
}

Forme* Couche::retraitForme(int indexVect){
	if (etatCouche == Active){
		Forme* formeRetiree = *(vecteur.popAt(indexVect));
		return formeRetiree; //vecteur retourne deja un pointeur null s'il y a erreur
	}
	else{
		return nullptr;
	}
}

Forme* Couche::getForme(int indexVect){
		return *(vecteur.readAt(indexVect));
}

double Couche::aire(){
	if(etatCouche != Initialisee && etatCouche != Cachee){
		for(int i=0; i<vecteur.size(); i++){
			aireCouche += (*(vecteur.readAt(i)))->aire();//Pointeur attention a verifier
		}
	}
	return aireCouche;
}

void Couche::afficher(ostream & s){
	if (vecteur.isEmpty() == true){
		cout<<"Couche vide"<<endl;
	}
	else if(etatCouche == Initialisee){
		cout<<"Couche initialisee"<<endl;
	}
	else if(etatCouche == Cachee){
		cout<<"Couche cachee"<<endl;
	}
	else{
		for(int i=0; i<vecteur.size(); i++){
			(*(vecteur.readAt(i)))->afficher(cout); // pointeur a verifier
		}
	}
}
