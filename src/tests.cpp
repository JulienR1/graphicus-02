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
   assert("Verification dimensions initiales (1)", monRectangle.getLargeur() == 1 && monRectangle.getHauteur() == 1, true);   
   assert("Modification dune valeur (1 de 4)", monRectangle.setLargeur(4), true);
   assert("Modification dune valeur (2 de 4)", monRectangle.getLargeur(), 4);   
   assert("Modification dune valeur (3 de 4)", monRectangle.setHauteur(7), true);
   assert("Modification dune valeur (4 de 4)", monRectangle.getHauteur(), 7);
   assert("Calcul de laire", monRectangle.aire(), 28.0);
   assert("Saisie de mesure invalide (1 de 2)", monRectangle.setLargeur(-1), false);
   assert("Saisie de mesure invalide (2 de 2)", monRectangle.setHauteur(-1), false);
   monRectangle.afficher(cout);

   Rectangle autreRectangle({10,-10}, 4,5);
   assert("Verification dimensions initiales (2)", autreRectangle.getHauteur() == 4 && autreRectangle.getLargeur() == 5, true);
   assert("Verification point dancrage", autreRectangle.getAncrage().x == 10 && autreRectangle.getAncrage().y == -10, true);

   Rectangle rectangleInvalide({1,2}, -1,-1);
   assert("Verification dimensions initiales (3)", rectangleInvalide.getHauteur() == 1 && rectangleInvalide.getLargeur() == 1, true);

   // CARRE
   cout << endl << "----------- Tests unitaires carre -----------" << endl << endl;
   Carre monCarre;
   assert("Verification dimensions initiales (1)", monCarre.getCote(), 1);
   assert("Modification dune valeur (1 de 2)", monCarre.setCote(4), true);
   assert("Modification dune valeur (2 de 2)", monCarre.getCote(), 4);
   assert("Calcul de laire", monCarre.aire(), 16.0);
   assert("Saisie de mesure invalide", monCarre.setCote(-1), false);
   monCarre.afficher(cout);

   Carre autreCarre({5,6}, 4);
   assert("Verification dimensions initiales (2)", autreCarre.getCote(), 4);
   assert("Verification point dancrage", autreCarre.getAncrage().x == 5 && autreCarre.getAncrage().y == 6, true);

   Carre carreInvalide({0,0}, -1);
   assert("Verification dimensions initiales (3)", carreInvalide.getCote(), 1);

   Carre* pCarre = new Carre();
   pCarre->setHauteur(2);
   assert("Ecrasement du rectangle (1 de 2)", pCarre->getCote(), 2);
   pCarre->setLargeur(5);
   assert("Ecrasement du rectangle (1 de 2)", pCarre->getCote(), 5);
   delete pCarre;

   // CERCLE
   cout << endl << "----------- Tests unitaires cercle -----------" << endl << endl;
   Cercle monCercle;
   assert("Verification dimensions initiales (1)", monCercle.getRayon(), 1);
   monCercle.setRayon(2);
   assert("Modification du rayon", monCercle.getRayon(), 2);
   assert("Calcul de laire", abs(monCercle.aire() - 12.56636) / 12.56636 < 0.0001, true);
   assert("Saisie de mesure invalide", monCercle.setRayon(-1), false);
   monCercle.afficher(cout);

   Cercle autreCercle({-2,-2}, 4);
   assert("Verification dimensions initiales (2)", autreCercle.getRayon(), 4);
   assert("Verification point dancrage", autreCercle.getAncrage().x == -2 && autreCercle.getAncrage().y == -2, true);

   Cercle cercleInvalide({0,0}, -1);
   assert("Verification dimensions initiales (2)", cercleInvalide.getRayon(), 1);
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
   cout << endl << "----------- Tests unitaires couches -----------" << endl << endl;

   Couche maCouche;
   assert("Condition initale", maCouche.getState(), Couche::etat::Initialisee);
   assert("Calcul de laire (1 de 4)", maCouche.aire(), 0.0);
   assert("Activation dune couche (1 de 2)", maCouche.setEtat(Couche::etat::Active), true);
   assert("Initialisation dune couche active", maCouche.setEtat(Couche::etat::Initialisee), false);

   Forme* maForme = new Rectangle();
   Forme* maForme2 = new Carre();
   assert("Retrait dune couche vide", maCouche.retraitForme(0) == nullptr, true);
   assert("Ajout dune forme (1 de 2)", maCouche.ajouterForme(maForme), true);
   assert("Ajout dune forme (2 de 3)", maCouche.ajouterForme(nullptr), false);
   maCouche.ajouterForme(maForme2);
   assert("Calcul de laire (2 de 4)", maCouche.aire(), 2.0);
   assert("Retrait dune forme (1 de 4)", *(maCouche.retraitForme(0)) == *(maForme), true);
   assert("Retrait dune forme (2 de 4)", maCouche.retraitForme(1) == nullptr, true);
   assert("Retrait dune forme (3 de 4)", maCouche.retraitForme(-1) == nullptr, true);

   assert("Desactivation dune couche", maCouche.setEtat(Couche::etat::Inactive), true);
   assert("Calcul de laire (3 de 4)", maCouche.aire(), 1.0);
   assert("Ajout dune forme (3 de 3)", maCouche.ajouterForme(maForme), false);
   assert("Retrait dune forme (4 de 4)", maCouche.retraitForme(0) == nullptr, true);
   assert("Cacher une couche (1 de 3)", maCouche.setEtat(Couche::etat::Cachee), true);
   
   Couche maCouche2;
   maCouche2.setEtat(Couche::etat::Active);
   assert("Cacher une couche (2 de 2)", maCouche2.setEtat(Couche::etat::Cachee), true);
   assert("Calcul de laire (4 de 4)", maCouche2.aire(), 0.0);
   assert("Translation invalide (1 de 3)", maCouche2.translater(10, 1), false);

   delete maForme;
   delete maForme2;

   Couche maCouche3;
   Forme* tForme1 = new Carre();
   Forme* tForme2 = new Cercle({1,1}, 2);
   Forme* tForme3 = new Rectangle({-5,41},2,4);
   
   maCouche3.setEtat(Couche::etat::Active);
   maCouche3.ajouterForme(tForme1);
   maCouche3.ajouterForme(tForme2);
   maCouche3.ajouterForme(tForme3);   

   maCouche3.translater(0,0);
   assert("Translation dune couche (1 de 2)", 
      tForme1->getAncrage().x == 0 && tForme1->getAncrage().y == 0 &&
      tForme2->getAncrage().x == 1 && tForme2->getAncrage().y == 1 &&
      tForme3->getAncrage().x == -5 && tForme3->getAncrage().y == 41, true);

   maCouche3.translater(5,3);
   assert("Translation dune couche (2 de 2)", 
      tForme1->getAncrage().x == 5 && tForme1->getAncrage().y == 3 &&
      tForme2->getAncrage().x == 6 && tForme2->getAncrage().y == 4 &&
      tForme3->getAncrage().x == 0 && tForme3->getAncrage().y == 44, true);

   assert("Reset dune couche (1 de 4)", maCouche3.aire() != 0, true);
   assert("Reset dune couche (2 de 4)", maCouche3.reset(), true);
   assert("Reset dune couche (3 de 4)", maCouche3.aire(), 0.0);
   assert("Reset dune couche (4 de 4)", maCouche3.getState(), Couche::etat::Initialisee);
   assert("Translation invalide (2 de 3)", maCouche3.translater(10, 0), false);

   Couche maCouche4;   
   maCouche4.setEtat(Couche::etat::Active);
   assert("Changement detat (1 de 4)", maCouche4.getState(), Couche::etat::Active);
   maCouche4.setEtat(Couche::etat::Cachee);
   assert("Changement detat (2 de 4)", maCouche4.getState(), Couche::etat::Cachee);
   maCouche4.setEtat(Couche::etat::Inactive);
   assert("Changement detat (3 de 4)", maCouche4.getState(), Couche::etat::Inactive); 
   assert("Translation invalide (3 de 3)", maCouche4.translater(1,1), false);
   assert("Changement detat (4 de 4)", maCouche4.setEtat(Couche::etat::Initialisee), false);

   maCouche.afficher(cout);
   maCouche2.afficher(cout);
   maCouche3.afficher(cout);
   maCouche4.afficher(cout);
}

void Tests::tests_unitaires_canevas()
{
   cout << endl << "----------- Tests unitaires canevas -----------" << endl << endl;
   
   Canevas monCanvas;
   assert("Couches correctement initialisees", validateCoucheStatesAtStart(monCanvas.getCoucheForTests()), true);

   assert("Activer couche (1 de 3)", monCanvas.activerCouche(1), true);
   assert("Activer couche (2 de 3)", monCanvas.getCoucheForTests()[1].getState(), Couche::etat::Active);   
   assert("Activer couche (3 de 3)", monCanvas.getCoucheForTests()[0].getState(), Couche::etat::Inactive);

   Forme* maForme1 = new Rectangle({1,2},2,6);
   Forme* maForme2 = new Carre({-1,0},3);
   Forme* maForme3 = new Cercle();
   assert("Ajout de formes (1 de 6)", monCanvas.ajouterForme(maForme1), true);
   assert("Ajout de formes (2 de 6)", monCanvas.ajouterForme(maForme2), true);
   assert("Ajout de formes (3 de 6)", monCanvas.ajouterForme(maForme3), true);
   assert("Ajout de formes (4 de 6)", monCanvas.getCoucheForTests()[1].qteDeForme(), 3);
   assert("Ajout de formes (5 de 6)", monCanvas.ajouterForme(nullptr), false);
   assert("Ajout de formes (6 de 6)", monCanvas.getCoucheForTests()[1].qteDeForme(), 3);
   assert("Calcul de laire", abs(monCanvas.aire() - 24.14159) / 24.14159 < 0.00001, true);
   assert("Translater une couche (1 de 2)", monCanvas.translater(1,1), true);
   assert("Translater une couche (2 de 2)",
         maForme1->getAncrage().x == 2 && maForme1->getAncrage().y == 3 &&
         maForme2->getAncrage().x == 0 && maForme2->getAncrage().y == 1 &&
         maForme3->getAncrage().x == 1 && maForme3->getAncrage().y == 1,
          true);

   assert("Retrait de formes (1 de 4)", monCanvas.retirerForme(1), true);
   assert("Retrait de formes (2 de 4)", monCanvas.retirerForme(10), false);
   assert("Retrait de formes (3 de 4)", monCanvas.retirerForme(-1), false);
   assert("Retrait de formes (4 de 4)", monCanvas.getCoucheForTests()[1].qteDeForme(), 2);

   Forme* maForme4 = new Rectangle();
   monCanvas.activerCouche(2);
   monCanvas.cacherCouche(2);
   assert("Ajout forme couche inactive", monCanvas.ajouterForme(maForme4), false);
   assert("Retirer forme couche inactive", monCanvas.retirerForme(0), false);
   assert("Calcul aire couche inactive", abs(monCanvas.aire() - 15.14159) / 15.14159 < 0.00001, true);
   monCanvas.activerCouche(1);

   assert("Reset du canevas (1 de 2)", monCanvas.reinitialiser(), true);
   assert("Reset du canevas (2 de 2)", validateCoucheStatesAtStart(monCanvas.getCoucheForTests()), true);
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
   tests_unitaires();
   tests_application_cas_validation();
}

void Tests::tests_application_cas_validation(){
   testCounter = 0;
   Canevas canvas;
   cout << endl << endl << "----------- Scenario de tests validation -----------" << endl;
   cout << "Affichage du canevas en cours:" << endl;
   canvas.afficher(cout);
   cout << endl << endl;

   assert("Activation de la couche 1", canvas.activerCouche(1), true);
   
   Forme* rectangle = new Rectangle({10,10}, 2, 5);
   Forme* carre = new Carre({-4,18}, 3);
   Forme* cercle = new Cercle({1,1}, 1);
   cout << endl << "Formes ajoutees au canevas:" << endl;
   cout << "\tRectangle: ";
   rectangle->afficher(cout);
   cout << "\tCarre: ";
   carre->afficher(cout);
   cout << "\tCercle: ";
   cercle->afficher(cout);
   assert("Ajouts des formes au canevas", canvas.ajouterForme(rectangle) && canvas.ajouterForme(carre) && canvas.ajouterForme(cercle), true);

   cout << endl;
   assert("Activation de la couche 2", canvas.activerCouche(2), true);

   Forme* uneFormeGeometrique = new Cercle({2, 3}, 25);
   cout << "Forme ajoutee" << endl << "\tCercle: ";
   uneFormeGeometrique->afficher(cout);
   assert("Ajout dune forme geometrique (cercle)", canvas.ajouterForme(uneFormeGeometrique), true);

   cout << endl;
   assert("Affichage du canevas", true, true);
   canvas.afficher(cout);

   cout << endl;
   double aireCanvas = canvas.aire();
   assert("Aire du canevas", abs(aireCanvas - 1985.6415) / 1985.6145 < 0.0001, true);
   cout << "Aire du canevas: " << aireCanvas << endl << endl;

   assert("Activation de la couche 0", canvas.activerCouche(0), true);

   Forme* forme1 = new Rectangle({0,0}, 1, 2);
   Forme* forme2 = new Rectangle({24,-13}, 4, 2);
   Forme* forme3 = new Rectangle({-1,-2}, 10, 1);
   cout << endl << "Ajout de 3 formes geometriques differentes (Rectangles)" << endl;
   cout << "\t";
   forme1->afficher(cout);
   cout << "\t";
   forme2->afficher(cout);
   cout << "\t";
   forme3->afficher(cout);
   assert("Ajout des formes", canvas.ajouterForme(forme1) && canvas.ajouterForme(forme2) && canvas.ajouterForme(forme3), true);

   cout << endl;
   assert("Cacher couche 2", canvas.cacherCouche(2), true);

   cout << endl;
   assert("Activer la couche 1", canvas.activerCouche(1), true);
   
   cout << endl;
   assert("Translation de la couche de {12,15}", canvas.translater(12, 15), true);

   cout << endl;
   assert("Affichage du canevas", true, true);
   canvas.afficher(cout);

   cout << endl;
   aireCanvas = canvas.aire();
   assert("Aire du canevas", abs(aireCanvas - 42.14159) / 42.14159 < 0.0001, true);
   cout << "Aire du canevas: " << aireCanvas << endl << endl;

   cout << endl;
   assert("Retirer la premiere forme de la couche", canvas.retirerForme(0), true);

   cout << endl;
   assert("Affichage du canevas", true, true);
   canvas.afficher(cout);

   cout << endl;
   aireCanvas = canvas.aire();
   assert("Aire du canevas", abs(aireCanvas - 32.14159) / 32.14159 < 0.0001, true);
   cout << "Aire du canevas: " << aireCanvas << endl << endl;

   cout << endl;
   canvas.reinitialiser();
   assert("Reinitialisation du canevas", true, true);

   cout << endl;
   assert("Affichage du canevas", true, true);
   canvas.afficher(cout);

   cout << endl;
   aireCanvas = canvas.aire();
   assert("Aire du canevas", aireCanvas, 0.0);
   cout << "Aire du canevas: " << aireCanvas << endl << endl;
}

bool Tests::validateCoucheStatesAtStart(Couche* couches){
   bool coucheInitCorrect = true;
   for(int i = 0; i < MAX_COUCHES; i++){      
      if(i==0){
         if(couches[i].getState() != Couche::etat::Active){
            coucheInitCorrect = false;
         }
      }else{
         if(couches[i].getState() != Couche::etat::Initialisee){
            coucheInitCorrect = false;
         }
      }
   }
   return coucheInitCorrect;
   return false;
}

template<typename T>
void Tests::assert(string testName, T passedValue, T expectedValue){
   if(passedValue == expectedValue){
      cout << "(" << (++testCounter) << ") " << GREEN << "REUSSI" << RESET << " : " << testName << endl;
   }else{
      cout << "(" << (++testCounter) << ") " << RED << "ECHOUE" << RESET << " : " << testName << endl;
   }
}
