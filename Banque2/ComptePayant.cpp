#include "ComptePayant.h"

Banque::ComptePayant::ComptePayant(Client* c, Devise* s, Devise* d):CompteCourant(c,s,d)
{
}

bool Banque::ComptePayant::debiter(Devise& M)
{
	return this->CompteCourant::debiter(M*1.05);
}
