#include "Compte.h"

namespace Banque {
	int Compte::nbCompte = 0;
	Mad* Compte::Plafond = new Mad(25000);
	Compte::Compte(Client* titulaire, Mad* Solde) :numCompte(++Compte::nbCompte)
	{
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
		*(this->Solde) = *(this->Solde) + M;
	}

	bool Compte::debiter(Mad& M)
	{
		if ((*(this->Solde) >= M) && (*(this->Solde) <= *Compte::Plafond)) {

			*(this->Solde) = *(this->Solde) - M;
			return true;
		}
		return false;
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
	Compte::~Compte()
	{
		if ((this->comptRef->dec() != 0) && (this->Proprietaire)) {
			this->Proprietaire = nullptr;
		}
		else
		{
			delete this->Proprietaire;
		}
	}
}