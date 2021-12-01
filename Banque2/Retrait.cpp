#include "Retrait.h"
namespace Banque {
	Retrait::Retrait( Devise* mt, Compte* c):Operation( mt, c)
	{
	}
	void Retrait::display() const
	{
		this->displayOp();
		cout << "Nature: Retait\n";
		this->displayFund();
	}
}
