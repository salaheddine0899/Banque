#pragma once
#include<iostream>
#include <string>
#include <list>
#include "GC.h"
//#include"Compte.h"

using namespace std;
namespace Banque {
	class Compte;
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		list<Compte*>* lc;
		GC* cptRef;
	public:
		Client(string, string, string);
		void afficher() const;
		void ajouter_compte(Compte &c);
		bool supprimer_compte(Compte& c);
		void afficher_compte()const;
	};
}