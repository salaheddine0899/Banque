#pragma once
#include "Devise.h"
namespace Banque {
    class Mad :
        public Devise
    {
    public:
        Mad(double val);
        Dolar* convertToDolar() override;
        Euro* convertToEuro() override;
    };
}
