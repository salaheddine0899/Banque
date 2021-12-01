#pragma once

#include <iostream>
#include "Devise.h"
using namespace std;
namespace Banque {
	class Compte;
	class Operation
	{
	private:
		int static nbop;
		const int numop;
		string date;
		string heure;
		
		Devise* montant;
		Compte* c;
	public:
		Operation(Devise*mt,Compte *c);
		void displayOp()const;
		virtual void display()const = 0;
		void displayFund()const;
	};
}

