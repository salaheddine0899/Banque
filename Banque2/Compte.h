#pragma once
#include <iostream>
using namespace std;
#include "Client.h"
#include "Mad.h"
#include "GC.h"
namespace Banque {
	class Compte
	{
	private:
		const int numCompte;
		static int nbCompte;
		Client* Proprietaire;
		Mad* Solde;
		static Mad* Plafond;
		GC* comptRef;
	public:
		Compte(Client*, Mad*);
		Compte(const Compte &);
		void crediter(Mad& M);
		bool debiter(Mad& M);
		bool verser(Mad& M, Compte& C);
		void consulter() const;
		~Compte();
	};

}