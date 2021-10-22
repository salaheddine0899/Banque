#pragma once
#include<iostream>
#include <string>
using namespace std;
namespace Banque {
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
	public:
		Client(string, string, string);
		void afficher() const;
	};
}