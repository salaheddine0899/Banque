#include "CompteCourant.h"

namespace Banque {
    Banque::CompteCourant::CompteCourant(Client* c, Mad* s, Mad* mtFix) :Compte(c, s)
    {
        this->mtFix = mtFix;
    }
    bool CompteCourant::debiter(Mad& M)
    {
        if ((*(this->Solde) >= M) && (*(this->Solde) <= *Compte::Plafond)) {

            *(this->Solde) = *(this->Solde) - M;
            this->lop->push_back(*(new Operation(false, &M)));
            return true;
        }
        return false;
    }

    bool Banque::CompteCourant::verserEpargne(CompteEpargne& c)
    {
        return this->verser(*this->mtFix, c);
    }
}
