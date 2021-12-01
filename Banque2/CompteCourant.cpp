#include "CompteCourant.h"

namespace Banque {
    Banque::CompteCourant::CompteCourant(Client* c, Devise* s, Devise* d) :Compte(c, s)
    {
        this->decouvert = d;
    }
    bool CompteCourant::debiter(Devise& M)
    {
        if (((*this->Solde-M) >=*decouvert ) && (*(this->Solde) <= *Compte::Plafond)) {

            *(this->Solde) = *(this->Solde) - M;
            this->lop->push_back(new Retrait(&M,this));
            return true;
        }
        return false;
    }

    /*bool Banque::CompteCourant::verserEpargne(CompteEpargne& c)
    {
        return this->verser(*this->mtFix, c);
    }*/
}
