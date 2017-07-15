#include "Monomial.h"
#include <iostream>
using namespace std;

Monomial::Monomial()
{
	number = 0;
	coeffic = 1;
	degree = 1;
}

Monomial::Monomial(float coeffic, int degree, float number)
{
	this->coeffic = coeffic;
	this->degree = degree;
	this->number = number;
}

int Monomial::GetDegree()
{
	return this->degree;
}

float Monomial::GetCoeff()
{
	return this->coeffic;
}

float Monomial::GetNumber()
{
	return this->number;
}


void Monomial::SetDegree(float degree)
{
	this->degree = degree;
}

void Monomial::SetCoeff(float coef)
{
	this->coeffic = coef;
}

void Monomial::SetNumber(float number)
{
	this->number = number;
}

void Monomial::Delete()
{
	delete this;
}


Monomial Monomial::Multiplication(Monomial x1, Monomial x2)
{

}

Monomial Monomial::GetMultiplier(Monomial x1, Monomial x2)
{

	Monomial answer;
	answer.coeffic = x1.coeffic / x2.coeffic;//коэффиценты делятся
	answer.degree = x1.degree - x2.degree;//степени отнимаются
	return answer;
}

Monomial Monomial::Substraction(Monomial x2)
{
	Monomial a;
	int coef = GetCoeff() - x2.GetCoeff();
	if (coef != 0)
		a.SetCoeff(GetCoeff() - x2.GetCoeff());

	return a;
}

Monomial Monomial::Div(Monomial x1, Monomial x2)
{
	return GetMultiplier(x1, x2);
}


Monomial::~Monomial()
{
}
