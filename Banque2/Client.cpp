#include "Client.h"
namespace Banque {

	Client::Client(string nom, string prenom, string adresse)
	{
		this->nom = nom;
		this->prenom = prenom;
		this->adresse = adresse;
		/*this->lc = new list<Compte*>();*/
	}

	void Client::afficher() const
	{
		cout << "Le propietaire:\n";
		cout << "Nom: " << this->nom << endl;
		cout << "Prenom: " << this->prenom << endl;
		cout << "Adress: " << this->adresse << endl;
	}

	/*void Client::ajouter_compte(Compte &c)
	{
		for (auto data : *this->lc)
			if (&c == data)
				return;

		this->lc->push_back(&c);
	}*/

	/*void Client::afficher_compte() const
	{
		for (auto i : *this->lc)
			i->consulter();
	}*/

}