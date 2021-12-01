#pragma once
#include "CompteCourant.h"
namespace Banque {
    class ComptePayant :
        public virtual CompteCourant
    {
    public:
        ComptePayant(Client* c, Devise* s, Devise* d);
        bool debiter(Devise& M)override;
    };
}
