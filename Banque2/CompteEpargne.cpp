#include "CompteEpargne.h"

namespace Banque {
	CompteEpargne::CompteEpargne(Client* c, Mad* s, double ti):Compte(c,s)
	{
		try {
			if (ti < 0 || ti>100) throw "vous devez saisir un taux valid";
			this->tauxInteret = ti;
		}
		catch (string e) {
			cout << e << endl;
		}
	}
	bool CompteEpargne::debiter(Mad& M)
	{
		if ((*(this->Solde) >= M)) {

			*(this->Solde) = *(this->Solde) - M;
			this->lop->push_back(*(new Operation(false, &M)));
			return true;
		}
		return false;
	}
	void CompteEpargne::updateSold()
	{
		*this->Solde= *this->Solde + (*this->Solde * (tauxInteret / 100));
	}
}
