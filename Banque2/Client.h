#pragma once
#include<iostream>
#include <string>
#include <list>
//#include"Compte.h"

using namespace std;
namespace Banque {
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		/*list<Compte*>* lc;*/
	public:
		Client(string, string, string);
		void afficher() const;
		/*void ajouter_compte(Compte &c);
		void afficher_compte()const;*/
	};
}