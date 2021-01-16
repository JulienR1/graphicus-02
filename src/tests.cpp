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
   // RECTANGLE
   cout << endl << "----------- Tests unitaires rectangle -----------" << endl << endl;
   Rectangle monRectangle;
   // assert("Verification dimensions initiales (1)", monRectangle.getLargeur() == 1 && monRectangle.getHauteur() == 1, true);
   // monRectangle.setLargeur(4);
   // assert("Modification dune valeur (1 de 2)", monRectangle.getLargeur(), 4);
   // monRectangle.setLongueur(7);
   // assert("Modification dune valeur (2 de 2)", monRectangle.getLongueur(), 7);
   // assert("Saisie de mesure invalide (1 de 2)", monRectangle.setLargeur(-1), false);
   // assert("Saisie de mesure invalide (2 de 2)", monRectangle.setLongueur(-1), false);
   // assert("Calcul de laire", monRectangle.aire(), 28);
   monRectangle.afficher(cout);

   Rectangle autreRectangle(4,5);
   // assert("Verification dimensions initiales (2)", autreRectangle.getLargeur() == 4 && autreRectangle.getLongueur() == 5, true);

   Rectangle rectangleInvalide(-1,-1);
   // assert("Verification dimensions initiales (3)", rectangleInvalide.getLargeur() == 1 && rectangleInvalide.getLongueur() == 1, true);

   // CARRE
   cout << endl << "----------- Tests unitaires carre -----------" << endl << endl;
   Carre monCarre;
   // assert("Verification dimensions initiales (1)", monCarre.getSize(), 1);
   // monCarre.setSize(4);   
   // assert("Modification dune valeur", monCarre.getSize(4), 4);   
   // assert("Saisie de mesure invalide", monRectangle.setSize(-1), false);
   // assert("Calcul de laire", monCarre.aire(), 16);
   monCarre.afficher(cout);

   Carre autreCarre(4);
   // assert("Verification dimensions initiales (2)", autreCarre.getSize(), 4);

   Carre carreInvalide(-1);
   // assert("Verification dimensions initiales (3)", carreInvalide.getSize(), 1);

   Rectangle* pCarre = new Carre();
   // pCarre->setLongueur(2);
   // assert("Ecrasement du rectangle (1 de 2)", pCarre->getSize() != 2, true);
   // pCarre->setLargeur(5);
   // assert("Ecrasement du rectangle (1 de 2)", pCarre->getSize() != 5, true);
   delete pCarre;


   // CERCLE
   cout << endl << "----------- Tests unitaires cercle -----------" << endl << endl;
   Cercle monCercle;
   // assert("Verification dimensions initiales (1)", monCercle.getRayon(), 1);
   // monCercle.setRayon(2);
   // assert("Modification du rayon", monCercle.getRayon(), 2);
   // assert("Saisie de mesure invalide", monCercle.setRayon(-1), false);
   // assert("Calcul de laire", abs(monCercle.aire() - 19.7392) / 19.7392 < 0.0001, true);
   monCercle.afficher(cout);

   Cercle autreCercle(4);
   // assert("Verification dimensions initiales (2)", monCercle.getRayon(), 4);

   Cercle cercleInvalide(-1);
   // assert("Verification dimensions initiales (2)", cercleInvalide.getRayon(), 1);1
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
