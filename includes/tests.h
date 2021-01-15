/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut etre adapte a vos besoins de tests. Ce fichier
 *    fait partie de la distribution de Graphicus.
********/

#include <iostream>
#include <string.h>
#include "canevas.h"

using namespace std;

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class Tests
{
public:
   // Methodes pour les tests unitaires des classes
   void tests_unitaires_formes();
   void tests_unitaires_vecteur();
   void tests_unitaires_couche();
   void tests_unitaires_canevas();
   void tests_unitaires(); // Appel de tous les tests unitaires

   // Methodes pour les tests unitaires des classes
   void tests_application_cas_01();
   void tests_application_cas_02();
   void tests_application(); // Appel de tous les tests applicatifs

private:
   // Fonction pour faciliter la generation des resultats des tests
   template<typename T>
   void assert(string testName, T passedValue, T expectedValue);
};
