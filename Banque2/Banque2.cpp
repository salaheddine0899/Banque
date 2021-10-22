// Banque2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Compte.h"

using namespace Banque;


int main(){

    Client* cl1 = new Client("ABID", "Salah Eddine", "Everywhere");
    Mad* s1 = new Mad(20000);
    //s1->afficher();
    Compte cpt1(cl1, s1);
    cpt1.consulter();
    Mad* s2 = new Mad(15000);
    Compte cpt2(cl1, s2);
    Mad* s3 = new Mad(1500);

    cpt1.verser(*s3, cpt2);

    cpt1.consulter();
    cpt2.consulter();

    Compte cpt4(cpt1);

    cpt4.consulter();


    std::cout << "Hello World!\n";
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
