#pragma once

#include<iostream>
using namespace std;
namespace Banque {
	class Mad;
	class Euro;
	class Dolar;
	class Devise
	{
	protected:
		double val;
	public:
		Devise(double val);
		void afficher() const;
		Devise& operator+(const Devise&);
		Devise& operator-(const Devise&);
		bool operator<=(const Devise&);
		bool operator>=(const Devise&);
		Devise& operator*(const double&);
		Devise& operator*(const Devise&);
		virtual Mad* convertToMad();
		virtual Euro* convertToEuro();
		virtual Dolar* convertToDolar();
	};
}