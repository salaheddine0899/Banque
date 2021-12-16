#pragma once
#include "Devise.h"
namespace Banque {
    class Euro :
        public Devise
    {
    public:
        Euro(double val);
        Mad* convertToMad() override;
        Dolar* convertToDolar() override;
    };
}
