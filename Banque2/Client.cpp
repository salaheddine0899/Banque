#include "Client.h"
namespace Banque {

	Client::Client(string nom, string prenom, string adresse)
	{
		this->nom = nom;
		this->prenom = prenom;
		this->adresse = adresse;
	}

	void Client::afficher() const
	{
		cout << "Le propietaire:\n";
		cout << "Nom: " << this->nom << endl;
		cout << "Prenom: " << this->prenom << endl;
		cout << "Adress: " << this->adresse << endl;
	}

}