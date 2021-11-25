#include "Compte.h"

namespace Banque {
	int Compte::nbCompte = 0;
	Mad* Compte::Plafond = new Mad(25000);
	Compte::Compte(Client* titulaire, Mad* Solde) :numCompte(++Compte::nbCompte)
	{
		this->lop = new list<Operation>();
		this->Proprietaire = titulaire;
		this->Solde = Solde;
		this->comptRef = new GC(1);

	}

	Compte::Compte(const Compte& c):numCompte(++nbCompte)
	{
		this->Proprietaire = c.Proprietaire;
		this->Solde = c.Solde;
		this->comptRef = c.comptRef;
		this->comptRef->inc();

	}

	void Compte::crediter(Mad& M) {
		//Operation* op = new Operation(true);
		*(this->Solde) = *(this->Solde) + M;
		this->lop->push_back(*(new Operation(true,&M)));
	}

	bool Compte::verser(Mad& M, Compte& C)
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
			i.display();
	}
	Compte& Compte::operator=(const Compte&c)
	{
		if (this != &c) {
			if (this->Proprietaire && this->comptRef && (!this->comptRef->dec())) {
				delete this->comptRef;
				this->comptRef = NULL;
			}
			this->Solde = c.Solde;
			this->Proprietaire = c.Proprietaire;
			this->comptRef = c.comptRef;
			this->comptRef->inc();
		}
		return *this;
		// TODO: insert return statement here
	}
	Compte::~Compte()
	{
		if ((this->comptRef->dec() != 0) && (this->Proprietaire)) {
			this->Proprietaire = nullptr;
		}
		else
		{
			delete this->Proprietaire;
		}
		this->lop->~list();
		delete this->lop;
	}
}