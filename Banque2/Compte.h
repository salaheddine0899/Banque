#pragma once
#include <iostream>
using namespace std;
#include "Client.h"
#include "Mad.h"
#include "GC.h"
#include "Operation.h"
namespace Banque {
	class Compte
	{
	private:
		const int numCompte;
		static int nbCompte;
		Client* Proprietaire;
		
		GC* comptRef;
	protected:
		Mad* Solde;
		static Mad* Plafond;
		list<Operation>* lop;
	public:
		Compte(Client*, Mad*);
		Compte(const Compte &);
		void crediter(Mad& M);
		virtual bool debiter(Mad& M)=0;
		bool verser(Mad& M, Compte& C);
		void consulter() const;
		void afficherOp()const;
		Compte&  operator=(const Compte&);
		~Compte();
	};

}