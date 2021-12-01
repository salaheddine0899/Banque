#include "Operation.h"
#include"Compte.h"
namespace Banque {
	int Operation::nbop = 0;
	Operation::Operation(Devise *mt,Compte*c):numop(++nbop)
	{
		this->date = __DATE__;
		this->heure = __TIME__;
		this->montant = mt;
		this->c = c;
	}
	void Operation::displayOp() const
	{

		cout << "     DATE          HEURE" << endl;
		cout << "  " << this->date << "      " << this->heure << endl;
		cout << "Transaction: " << this->numop << endl;
		
		/*if (this->typeOp) cout << "crediter" << endl;
		else cout << "retrait" << endl;*/
		
	}
	void Operation::displayFund() const
	{
		cout << "Montant: ";
		this->montant->afficher();
		cout << endl;
	}
}
