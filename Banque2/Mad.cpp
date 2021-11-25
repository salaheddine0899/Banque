#include "Mad.h"
namespace Banque {
	Mad::Mad(double val)
	{
		this->val = val;
	}

	void Mad::afficher() const
	{
		cout << "le solde est:" << this->val << " MAD." << endl;
	}

	Mad& Mad::operator+(const Mad& M)
	{
		// TODO: insert return statement here
		Mad* res = new Mad(this->val + M.val);
		return *res;
	}

	Mad& Mad::operator-(const Mad& M)
	{
		// TODO: insert return statement here
		Mad* res = new Mad(this->val + M.val);
		return *res;
	}

	bool Mad::operator<=(const Mad& M)
	{
		return this->val <= M.val;
	}

	bool Mad::operator>=(const Mad& M)
	{
		return this->val >= M.val;
	}
	Mad& Mad::operator*(const double&val)
	{
		// TODO: insert return statement here
		Mad *res=new Mad(this->val*val);
		return *res;

	}
}