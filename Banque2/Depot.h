#pragma once
#include "Operation.h"
namespace Banque {
    class Depot :
        public Operation
    {
    public:
        Depot(Devise* mt, Compte* c);
        void display()const;
    };
}
