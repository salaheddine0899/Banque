#include "Mad.h"
#include "Dolar.h"
#include "Euro.h"
namespace Banque {
	Mad::Mad(double val):Devise(val)
	{
	}
	Dolar* Mad::convertToDolar()
	{
		Dolar* d = new Dolar(0.125*this->val);
		return d;
	}
	Euro* Mad::convertToEuro()
	{
		Euro* e = new Euro(0.1*this->val);
		return e;
	}
}