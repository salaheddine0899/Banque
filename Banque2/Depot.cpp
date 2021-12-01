#include "Depot.h"

Banque::Depot::Depot(Devise* mt, Compte* c):Operation(mt,c)
{
}

void Banque::Depot::display() const
{
	this->displayOp();
	cout << "Nature: Depot\n";
	this->displayFund();
}
