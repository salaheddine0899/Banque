#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
namespace Banque {
    class CompteEpargnePay :
        public CompteEpargne, public ComptePayant
    {
    public:
        CompteEpargnePay(Client* c, Devise* s, double ti,Devise* d);
    };
}
