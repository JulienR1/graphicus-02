/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "../includes/tests.h"

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
}

void Tests::tests_unitaires_vecteur()
{
   cout << endl << "----------- Tests unitaires vecteur -----------" << endl << endl;

   Vecteur<int> monVecteur;
   assert("Construction vecteur (1 de 2)", monVecteur.capacity(), 1);
   assert("Construction vecteur (2 de 2)", monVecteur.size(), 0);

   assert("Detection vecteur vide (1 de 3)", monVecteur.isEmpty(), true);
   assert("Retrait dun vecteur vide (1 de 2)", monVecteur.popAt(0) == nullptr, true);
   assert("Retrait dun vecteur vide (2 de 2)", monVecteur.readAt(0) == nullptr, true);
   assert("Insertion dun element", monVecteur.append(42), true);   
   assert("Validation capacite (1 de 3)", monVecteur.capacity(), 1);
   assert("Detection vecteur vide (2 de 3)", monVecteur.isEmpty(), false);
   assert("Verification qte d'elements (1 de 2)", monVecteur.size(), 1);
   assert("Lecture dun element", monVecteur.readAt(0) != nullptr, true);
   if(monVecteur.readAt(0) != nullptr)
      assert("Lecture dun element (suite)", *(monVecteur.readAt(0)), 42);

   assert("Lecture dun element inexistant", monVecteur.readAt(60) == nullptr, true);
   assert("Lecture dun index negatif", monVecteur.readAt(-1) == nullptr, true);

   monVecteur.append(18);
   assert("Validation capacite vecteur (2 de 3)", monVecteur.capacity(), 2);
   assert("Validation rapport size() et capacite() (1 de 2)", monVecteur.size() <= monVecteur.capacity(), true);

   monVecteur.append(96);
   assert("Validation rapport size() et capacite() (2 de 2)", monVecteur.size() <= monVecteur.capacity(), true);
   assert("Validation capacite vecteur (3 de 3)", monVecteur.capacity(), 4);

   assert("Verification qte d'elements (2 de 2)", monVecteur.size(), 3);
   assert("Retrait dun element", monVecteur.popAt(1) != nullptr && monVecteur.size() == 2, true);

   int* readElement = monVecteur.readAt(1);
   assert("Offset de tous les elements au retrait", readElement != nullptr, true);
   if(readElement != nullptr)
      assert("Offset de tous les elements au retrait (suite)", *(readElement), 96);

   cout << endl << "Le vecteur resultant:";
   monVecteur.print();
   cout << "Le vecteur attendu: [42, 96,  ,  ]" << endl << endl;

   monVecteur.clear();
   assert("Validation vecteur vide", monVecteur.size(), 0);
   assert("Detection vecteur vide (3 de 3)", monVecteur.isEmpty(), true);

   cout << "Affichage vecteur vide: ";
   monVecteur.print();   
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   // tests_application_cas_01();
   // tests_application_cas_02();

   tests_unitaires_vecteur();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}

template<typename T>
void Tests::assert(string testName, T passedValue, T expectedValue){
   if(passedValue == expectedValue){
      cout << GREEN << "REUSSI" << RESET << " : " << testName << endl;
   }else{
      cout << RED << "ECHOUE" << RESET << " : " << testName << endl;
   }
}
