#pragma once
#include "Compte.h"
#include "CompteEpargne.h"
#include "Mad.h"
namespace Banque {
    class CompteCourant :
        public Compte
    {
    private:
        Mad* mtFix;
    public:
        CompteCourant(Client* c, Mad* s, Mad* mtFix);
        bool verserEpargne(CompteEpargne&c);
        bool debiter(Mad& M) override;
    };
}
