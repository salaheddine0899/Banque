#pragma once

#include<iostream>
using namespace std;
namespace Banque {
	class Mad
	{
		double val;
	public:
		Mad(double val);
		void afficher() const;
		Mad& operator+(const Mad&);
		Mad& operator-(const Mad&);
		bool operator<=(const Mad&);
		bool operator>=(const Mad&);
		Mad& operator*(const double&);
	};
}