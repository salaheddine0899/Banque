#pragma once

#include<iostream>
using namespace std;
namespace Banque {
	class Devise
	{
		double val;
	public:
		Devise(double val);
		void afficher() const;
		Devise& operator+(const Devise&);
		Devise& operator-(const Devise&);
		bool operator<=(const Devise&);
		bool operator>=(const Devise&);
		Devise& operator*(const double&);
	};
}