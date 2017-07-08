#include "Virajenie.h"


Polinom Virajenie::GetPolinom(int i)
{
	return virajenie[i];
}

vector<Polinom> Virajenie::Division(vector<Polinom> delitel)//сделать рекусию
{
	//virajenie[0] = virajenie[0].GetMultiplier(virajenie[0], delitel[0]);//получили множитель
	Polinom multiplier;
	vector<Polinom> peremnoj;
	for (int i = 0; i < delitel.size(); i++)
	{
		multiplier= virajenie[0].GetMultiplier(virajenie[0], delitel[0]);
		peremnoj = Multiplication(virajenie, delitel[i]);
		if (virajenie[i].GetCoeff() == peremnoj[i].GetCoeff && (virajenie[i].GetDegree() == peremnoj[i].GetDegree())&& (virajenie[i].GetNumber() == peremnoj[i].GetNumber())  )
		{
			/*Здесь реализовать удаление из вектора*/
			virajenie.erase(virajenie.begin()+i, 1);
		}
	}

	
}

void Virajenie::SetVirajenie(Polinom obj)
{
	virajenie.push_back(obj);
}

vector<Polinom>  Virajenie::Multiplication(vector<Polinom> delitel, Polinom mnoj)
{
	vector<Polinom> answer(delitel.size());
	for (int i = 0; i < delitel.size(); i++)
	{
		answer[i].SetCoeff(answer[i].GetCoeff()*mnoj.GetCoeff());
		answer[i].SetDegree(answer[i].GetDegree() + answer[i].GetDegree());
	}
	return answer;

}


Virajenie::Virajenie()
{
}


Virajenie::~Virajenie()
{
}
