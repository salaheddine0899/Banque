#include "Dolar.h"
#include "Euro.h"
#include "Mad.h"
namespace Banque {
	Dolar::Dolar(double val):Devise(val)
	{
	}
	Mad* Dolar::convertToMad()
	{
		Mad* m = new Mad(this->val * 8);
		return m;
	}
	Euro* Dolar::convertToEuro()
	{
		Euro* e = new Euro(0.8 * this->val);
		return e;
	}
}
