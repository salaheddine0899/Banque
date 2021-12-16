#include "Devise.h"
#include "Euro.h"
#include "Mad.h"
#include "Dolar.h"
namespace Banque {
	Devise::Devise(double val)
	{
		this->val = val;
	}

	void Devise::afficher() const
	{
		cout << "le solde est:" << this->val<< endl;
	}

	Devise& Devise::operator+(const Devise& M)
	{
		// TODO: insert return statement here
		Devise* res = new Devise(this->val + M.val);
		return *res;
	}

	Devise& Devise::operator-(const Devise& M)
	{
		// TODO: insert return statement here
		Devise* res = new Devise(this->val + M.val);
		return *res;
	}

	bool Devise::operator<=(const Devise& M)
	{
		return this->val <= M.val;
	}

	bool Devise::operator>=(const Devise& M)
	{
		return this->val >= M.val;
	}
	Devise& Devise::operator*(const double&val)
	{
		// TODO: insert return statement here
		Devise *res=new Devise(this->val*val);
		return *res;

	}
	Devise& Devise::operator*(const Devise&M)
	{
		// TODO: insert return statement here
		Devise* res = new Devise(this->val + M.val);
		return *res;
	}
	Mad* Devise::convertToMad()
	{
		return nullptr;
	}
	Euro* Devise::convertToEuro()
	{
		return nullptr;
	}
	Dolar* Devise::convertToDolar()
	{
		return nullptr;
	}
}