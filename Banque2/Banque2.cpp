// Banque2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CompteEpargne.h"
#include "Dolar.h"
#include "Mad.h"
#include "Euro.h"

using namespace Banque;


int main(){

    Client* cl1 = new Client("ABID", "Salah Eddine", "Everywhere");
    Client* cl2 = new Client("ABID", "Aomar", "Everywhere");

    Devise* s1 = new Mad(2000);
    
  CompteEpargne cpt1(cl1, s1,2);
    cpt1.consulter();
   Devise* s2 = new Mad(15000);
   CompteEpargne cpt2(cl2, s2, 2);
   CompteEpargne cpt3(cl2, s2,2);
   Devise* s3 = new Mad(1500);
   Devise* s4 = new Mad(1500);
   cpt1.crediter(*s3);
   cpt2.debiter(*s4);
   cpt1.verser(*s3, cpt2);

   cpt2.verser(*s3, cpt1);

    cpt1.afficherOp();

    cpt1.consulter();
    cpt2.consulter();

    cl2->afficher_compte();
    cl1->ajouter_compte(cpt1);
    cl1->ajouter_compte(cpt1);
    cl1->ajouter_compte(cpt2);

    cl1->afficher_compte();

    //Compte cpt4(cpt1);

    //cpt4.consulter();

    delete s1;
    delete s2;
    delete s3;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
