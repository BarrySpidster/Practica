#include <iostream>
#include "Polinom.h"



vector<Monomial> Polinom::Substraction(vector<Monomial> vichetaemoe)
{
	for (int i = 0; i < vichetaemoe.size(); i++)
	{
	/*	if (virajenie[i].GetCoeff() == vichetaemoe[i].GetCoeff() && (virajenie[i].GetDegree() == vichetaemoe[i].GetDegree()))
		{
			//virajenie.erase(virajenie.begin());
			virajenie[i].SetCoeff(0);
		}*/
		if( virajenie[i].GetDegree()==vichetaemoe[i].GetDegree())
		{
			virajenie[i].SetCoeff(virajenie[i].GetCoeff() - vichetaemoe[i].GetCoeff());
		}
	}

	for (int i = 0; i < virajenie.size(); i++)
	{
		if (virajenie[i].GetCoeff() == 0)
		{
			virajenie.erase(virajenie.begin()+i);
		}
	}


	return virajenie;
}

void Polinom::Division(vector<Monomial> delitel)
{
	vector<Monomial> promej;
	vector<Monomial> answer;
	Monomial multiplier;
	Monomial count;
	for (int i = 0; i < virajenie.size(); i++)
	{
		if (virajenie.size() < delitel.size())
			break;
	//	multiplier.SetCoeff( virajenie[i].GetMultiplier(virajenie[i], promej[i]).GetCoeff());//получили множитель
		//multiplier.SetDegree(virajenie[i].GetMultiplier(virajenie[i], promej[i]).GetDegree());
		multiplier = virajenie[i].GetMultiplier(virajenie[i], delitel[i]);
		answer.push_back(multiplier);
		promej = Multiplication(delitel, multiplier);//получили вычитаемое
		virajenie = Substraction(promej);
	}

	PrintResult(answer, virajenie,delitel);
}

void Polinom::SetVirajenie(Monomial obj)
{
	virajenie.push_back(obj);
}

void Polinom::PrintResult(vector<Monomial> chastnoe, vector<Monomial> ostatoc, vector<Monomial> delitel)
{
	std::cout << "("  ;
	for (int i = 0; i < chastnoe.size(); i++)
	{
		std::cout << chastnoe[i].GetCoeff() << "x^" << chastnoe[i].GetDegree();
	std:cout << " ";
	}
	std::cout <<")"<< "*" << "(";
	for (int i = 0; i < delitel.size(); i++)
	{
		std::cout << delitel[i].GetCoeff() << "x^" << delitel[i].GetDegree();
		std::cout << " ";
	}
	std::cout << ")" << "+" << "(";
	for (int i = 0; i < ostatoc.size(); i++)
	{
		std::cout << ostatoc[i].GetCoeff() << "x^" << ostatoc[i].GetDegree();
		std::cout << " ";
	}
	std::cout <<")"<< endl;

}

void Polinom::SetViraj(Monomial x)
{
	virajenie.push_back(x);
}

vector<Monomial> Polinom::GetViraj()
{
	return this->virajenie;
}


vector<Monomial>  Polinom::Multiplication(vector<Monomial> delitel, Monomial mnoj)
{
	vector<Monomial> answer=delitel;
	for (int i = 0; i < delitel.size(); i++)
	{
		answer[i].SetCoeff(answer[i].GetCoeff()*mnoj.GetCoeff());
		answer[i].SetDegree(answer[i].GetDegree() + mnoj.GetDegree());
	}
	return answer;

}


Polinom::Polinom()
{
}


Polinom::~Polinom()
{
}
