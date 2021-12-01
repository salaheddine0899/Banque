#pragma once
#include "Operation.h"
namespace Banque {
    class Retrait :
        public Operation
    {

    public:
        Retrait( Devise* mt, Compte* c);
        void display()const override;
    };
}

