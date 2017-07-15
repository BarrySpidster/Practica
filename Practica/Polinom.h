#pragma once
#include <vector>
#include "Monomial.h"
using namespace std;
class Polinom
{
	vector<Monomial> virajenie;
public:
	vector<Monomial> Division(vector<Monomial> delitel);
	void SetVirajenie(Monomial obj);
	vector<Monomial> Multiplication(vector<Monomial>delitel, Monomial mnoj );
	Monomial GetPolinom(int i);
	vector<Monomial> Substraction(vector<Monomial> vichetaemoe);


	Polinom();
	~Polinom();
};

