#pragma once

#include <iostream>
#include "Mad.h"
using namespace std;
namespace Banque {
	class Operation
	{
	private:
		int static nbop;
		const int numop;
		string date;
		string heure;
		bool typeOp;
		Mad* montant;
	public:
		Operation(bool t,Mad*mt);
		void display()const;
	};
}

