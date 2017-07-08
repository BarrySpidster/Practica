#pragma once
#include <vector>
#include "Polinom.h"
using namespace std;
class Virajenie
{
	vector<Polinom> virajenie;
public:
	vector<Polinom> Division(vector<Polinom> delitel);
	void SetVirajenie(Polinom obj);
	vector<Polinom> Multiplication(vector<Polinom>delitel,Polinom mnoj );
	Polinom GetPolinom(int i);
	Virajenie();
	~Virajenie();
};

