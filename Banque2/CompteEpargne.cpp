#include "CompteEpargne.h"
#include<assert.h>

namespace Banque {
	CompteEpargne::CompteEpargne(Client* c, Devise* s, double ti):Compte(c,s)
	{
		assert(ti >= 0 && ti <= 100);
		try {
			if (ti < 0 || ti>100) throw "vous devez saisir un taux valid";
			this->tauxInteret = ti;
		}
		catch (string e) {
			cout << e << endl;
		}
	}
	bool CompteEpargne::debiter(Devise& M)
	{
		if ((*(this->Solde) >= M)) {

			*(this->Solde) = *(this->Solde) - M;
			this->lop->push_back(new Retrait(&M,this));
			return true;
		}
		return false;
	}
	void CompteEpargne::updateSold()
	{
		*this->Solde= *this->Solde + (*this->Solde * (tauxInteret / 100));
	}
}
