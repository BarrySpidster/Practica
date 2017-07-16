#include "Monomial.h"
#include <iostream>
using namespace std;

Monomial::Monomial()
{
	//number = 0;
	coeffic = 1;
	degree = 1;
}

Monomial::Monomial(float coeffic, float degree)
{
	this->coeffic = coeffic;
	this->degree = degree;
}

int Monomial::GetDegree()
{
	return this->degree;
}

float Monomial::GetCoeff()
{
	return this->coeffic;
}


void Monomial::SetDegree(float degree)
{
	this->degree = degree;
}

void Monomial::SetCoeff(float coef)
{
	this->coeffic = coef;
}


Monomial Monomial::operator=(Monomial x1)
{
	return Monomial(this->coeffic = x1.GetCoeff(), this->degree = x1.GetDegree());
}

Monomial Monomial::Multiplication(Monomial x1, Monomial x2)
{
	return Monomial();
}

Monomial Monomial::GetMultiplier(Monomial x1, Monomial x2)
{
	Monomial answer;
	answer.SetCoeff( x1.coeffic / x2.coeffic);//коэффиценты делятся
	answer.SetDegree( x1.degree - x2.degree);//степени отнимаются
	return answer;
}

Monomial Monomial::Substraction(Monomial x2)
{
	Monomial a;
	int coef = GetCoeff() - x2.GetCoeff();
	if (coef != 0 && GetDegree()==x2.GetDegree())
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
