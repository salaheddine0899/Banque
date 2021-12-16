#pragma once
#include "CompteCourant.h"
namespace Banque {
    class ComptePayant :
        public CompteCourant
    {
    public:
        ComptePayant(Client* c, Devise* s, Devise* d);
        bool debiter(Devise& M)override;
    };
}
