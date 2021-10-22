#include "GC.h"

Banque::GC::GC(int compt)
{
	this->compt = compt;
}

void Banque::GC::inc()
{
	this->compt++;
}

int Banque::GC::dec()
{
	return --this->compt;
}
