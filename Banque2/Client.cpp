#include "Client.h"
#include "Compte.h"
namespace Banque {

	Client::Client(string nom, string prenom, string adresse)
	{
		this->nom = nom;
		this->prenom = prenom;
		this->adresse = adresse;
		this->cptRef = new GC(1);
		this->lc = new list<Compte*>();
	}

	void Client::afficher() const
	{
		cout << "Le propietaire:\n";
		cout << "Nom: " << this->nom << endl;
		cout << "Prenom: " << this->prenom << endl;
		cout << "Adress: " << this->adresse << endl;
	}

	void Client::ajouter_compte(Compte &c)
	{
		for (auto data : *this->lc)
			if (&c == data)
				return;

		this->cptRef->inc();
		this->lc->push_back(&c);
	}

	bool Client::supprimer_compte(Compte& c)
	{
		this->lc->remove(&c);
		return this->cptRef->dec()==0;
	}

	void Client::afficher_compte() const
	{
		for (auto i : *this->lc)
			i->consulter();
	}

}