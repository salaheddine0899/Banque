#pragma once
namespace Banque {
	class GC
	{
	private:
		int compt;
	public:
		GC(int);
		void inc();
		int dec();
		bool isEmpty();
	};
}
