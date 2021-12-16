#pragma once
#include "Compte.h"
namespace Banque {
    class CompteEpargne :
        public Compte
    {
    private:
        double tauxInteret;
    public:
        CompteEpargne(Client*c,Devise*s,double ti);
        bool debiter(Devise& M) override;
        void updateSold();

    };
}

