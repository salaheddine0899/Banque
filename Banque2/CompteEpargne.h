#pragma once
#include "Compte.h"
namespace Banque {
    class CompteEpargne :
        public Compte
    {
    private:
        double tauxInteret;
    public:
        CompteEpargne(Client*c,Mad*s,double ti);
        bool debiter(Mad& M) override;
        void updateSold();

    };
}

