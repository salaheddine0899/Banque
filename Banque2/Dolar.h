#pragma once
#include "Devise.h"
namespace Banque {
    class Dolar :
        public Devise
    {
    public:
        Dolar(double val);
        Mad* convertToMad() override;
        Euro* convertToEuro() override;
    };
}
