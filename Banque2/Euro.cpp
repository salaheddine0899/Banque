#include "Euro.h"
#include "Dolar.h"
#include "Mad.h"
namespace Banque {
	Euro::Euro(double val):Devise(val)
	{
	}
	Mad* Euro::convertToMad()
	{
		Mad* m = new Mad(this->val * 10);
		return m;
	}
	Dolar* Euro::convertToDolar()
	{
		Dolar* d = new Dolar(1.25 * this->val);
		return d;
	}
}
