#include "Operation.h"
namespace Banque {
	int Operation::nbop = 0;
	Operation::Operation(bool t,Mad *mt):numop(++nbop)
	{
		this->date = __DATE__;
		this->heure = __TIME__;
		this->typeOp = t;
		this->montant = mt;
	}
	void Operation::display() const
	{

		cout << "     DATE          HEURE" << endl;
		cout << "  " << this->date << "      " << this->heure << endl;
		cout << "Transaction: " << this->numop << endl;
		cout << "Nature: ";
		if (this->typeOp) cout << "crediter" << endl;
		else cout << "retrait" << endl;
		cout << "Montant: ";
		this->montant->afficher();
		cout << endl;
	}
}
