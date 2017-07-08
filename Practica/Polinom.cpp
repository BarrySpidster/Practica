#include "Polinom.h"
#include <iostream>
using namespace std;

Polinom::Polinom()
{
	number = 0;
	coeffic = 1;
	degree = 1;
}

Polinom::Polinom(float coeffic, int degree, float number)
{
	this->coeffic = coeffic;
	this->degree = degree;
	this->number = number;
}

int Polinom::GetDegree()
{
	return this->degree;
}

float Polinom::GetCoeff()
{
	return this->coeffic;
}

float Polinom::GetNumber()
{
	return this->number;
}

void Polinom::Division()
{
}

void Polinom::Print()
{
	cout << coeffic << "x" << degree << endl;
}

void Polinom::SetDegree(float degree)
{
	this->degree = degree;
}

void Polinom::SetCoeff(float coef)
{
	this->coeffic = coef;
}

void Polinom::SetNumber(float number)
{
	this->number = number;
}


Polinom Polinom::Multiplication(Polinom x1, Polinom x2)
{

}

Polinom Polinom::GetMultiplier(Polinom x1, Polinom x2)
{

	Polinom answer;
	answer.coeffic = x1.coeffic / x2.coeffic;//коэффиценты делятся
	answer.degree = x1.degree - x2.degree;//степени отнимаются


	return answer;
}


Polinom::~Polinom()
{
}
