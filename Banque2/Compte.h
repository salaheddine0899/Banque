#pragma once
#include <iostream>
using namespace std;
#include "Client.h"
#include "Devise.h"
#include "GC.h"
#include "Depot.h"
#include "Retrait.h"
namespace Banque {
	class Compte
	{
	private:
		const int numCompte;
		static int nbCompte;
		Client* Proprietaire;
		
		GC* comptRef;
	protected:
		Devise* Solde;
		static Devise* Plafond;
		list<Operation*>* lop;
	public:
		Compte(Client*, Devise*);
		Compte(const Compte &)=delete;

		void crediter(Devise& M);
		virtual bool debiter(Devise& M)=0;
		bool verser(Devise& M, Compte& C);
		void consulter() const;
		void afficherOp()const;
		Compte&  operator=(const Compte&)=delete;
		//void incrementer_client();
		~Compte();
	};

}