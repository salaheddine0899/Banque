#include "Compte.h"

namespace Banque {
	int Compte::nbCompte = 0;
	Devise* Compte::Plafond = new Devise(25000);
	Compte::Compte(Client* titulaire, Devise* Solde) :numCompte(++Compte::nbCompte)
	{
		this->lop = new list<Operation*>();
		this->Proprietaire = titulaire;
		this->Proprietaire->ajouter_compte(*this);
		this->Solde = Solde;
		this->comptRef = new GC(1);

	}

	void Compte::crediter(Devise& M) {
		//Operation* op = new Operation(true);
		*(this->Solde) = *(this->Solde) + M;
		this->lop->push_back(new Depot(&M,this));
	}

	bool Compte::verser(Devise& M, Compte& C)
	{
		if (this->debiter(M)) {
			C.crediter(M);
			return true;
		}
		return false;
	}
	void Compte::consulter() const
	{
		cout << "le compte num: " << this->numCompte << endl;
		this->Proprietaire->afficher();
		this->Solde->afficher();
	}
	void Compte::afficherOp() const
	{
		for (auto i : *this->lop)
			i->display();
	}
	/*void Compte::incrementer_client()
	{
		this->comptRef->inc();
	}*/
	Compte::~Compte()
	{
		if ((!this->Proprietaire->supprimer_compte(*this)) && (this->Proprietaire)) {
			//this->Proprietaire->supprimer_compte(*this);
			this->Proprietaire = nullptr;
		}
		else
		{
			delete this->Proprietaire;
		}
		//this->lop->~list();
		this->lop->clear();
		delete this->lop;
		this->lop = 0;
	}
}