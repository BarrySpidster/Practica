#include "Polinom.h"


Monomial Polinom::GetPolinom(int i)
{
	return virajenie[i];
}

vector<Monomial> Polinom::Substraction(vector<Monomial> vichetaemoe)
{
	for (int i = 0; i < vichetaemoe.size(); i++)
	{
		if (virajenie[i].GetCoeff() == vichetaemoe[i].GetCoeff() && (virajenie[i].GetDegree()== vichetaemoe[i].GetDegree()) ||
			(virajenie[i].GetNumber()== vichetaemoe[i].GetNumber())  )
		{
			virajenie.erase(virajenie.begin());
		}
		else
		{
			virajenie[i].SetCoeff(virajenie[i].GetCoeff() - vichetaemoe[i].GetCoeff());
			virajenie[i].SetNumber(virajenie[i].GetNumber() - vichetaemoe[i].GetNumber());
		}


	}


	return virajenie;
}

vector<Monomial> Polinom::Division(vector<Monomial> delitel)//сделать рекусию
{
	for (int i = 0; i < delitel.size(); i++)
	{

		virajenie[i].GetMultiplier(virajenie[i], delitel[i]);


	}


}

void Polinom::SetVirajenie(Monomial obj)
{
	virajenie.push_back(obj);
}

vector<Monomial>  Polinom::Multiplication(vector<Monomial> delitel, Monomial mnoj)
{
	vector<Monomial> answer(delitel.size());
	for (int i = 0; i < delitel.size(); i++)
	{
		answer[i].SetCoeff(answer[i].GetCoeff()*mnoj.GetCoeff());
		answer[i].SetDegree(answer[i].GetDegree() + answer[i].GetDegree());
	}
	return answer;

}


Polinom::Polinom()
{
}


Polinom::~Polinom()
{
}
