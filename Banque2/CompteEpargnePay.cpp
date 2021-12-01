#include "CompteEpargnePay.h"

Banque::CompteEpargnePay::CompteEpargnePay(Client* c, Devise* s, double ti, Devise* d):CompteEpargne(c,s,ti),ComptePayant(c,s,d),CompteCourant(c,s,d),Compte(c,d)
{
}
