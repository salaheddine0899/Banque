#pragma once
#include "Compte.h"
#include "CompteEpargne.h"
#include "Devise.h"
namespace Banque {
    class CompteCourant :
        public Compte
    {
    private:
        Devise* decouvert;
    public:
        CompteCourant(Client* c, Devise* s, Devise* d);
       // bool verserEpargne(CompteEpargne&c);
        virtual bool debiter(Devise& M) override;
    };
}
