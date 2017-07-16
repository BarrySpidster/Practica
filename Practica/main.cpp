#include <iostream>
#include <vector>
#include "Monomial.h"
#include "Polinom.h"
#include "Gauss.h"

#include "SistemaVectorov.h"
using namespace std;

int Min(int *numbers, int size)
{
	int min = numbers[0];
	for (int i = 1; i < size; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}

	return min;
}

void GetNOD(int *numbers, int size)
{
	int min = Min(numbers, size);
	int k, NOD, boof;
	vector<int> NODS;
	for (int i = 1; i <= min; i++)
	{
		NOD = i;
		boof = 0;
		for (int j = 0; j < size; j++)
		{
			if (numbers[j] % NOD == 0)
				boof++;
		}
		if (boof == size)
			NODS.push_back(NOD);
	}
	if (NODS.size() > 0)
	{
		int max = NODS[0];
		for (int i = 1; i < NODS.size(); i++)
		{
			if (max < NODS[i])
				max = NODS[i];
		}

		cout << "НОД " << max << endl;
	}
	else
	{
		cout << "НОД is not exist" << endl;
	}

}

Polinom CreatePolinom(Polinom virajenie)
{

	Monomial x1;
	float coef;
	float degree;
	float number;
	int n;
	cout << "Введите количество членов полинома" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Введите коеффициент: ";
		cin >> coef;
		cout << endl;
		cout << "Введите степень: ";
		cin >> degree;
		cout << endl;
		x1.SetCoeff(coef);
		x1.SetDegree(degree);
	//	x1.SetNumber(number);
		virajenie.SetViraj(x1);
	}
	return virajenie;
}



void main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите количество элементов для поиска НОД" << endl;
	int n;
	cin >> n;
	int *a=new int [n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите целое число" << endl;
		cin >> a[i];
	}

	GetNOD(a, n);
	cout << "Деление многочлено" << endl;
	Polinom delimoe;
	Polinom delitel;
	
	delimoe = CreatePolinom(delimoe);
	delitel = CreatePolinom(delitel);
	delimoe.Division(delitel.GetViraj());

	cout << "Ортогональные векторы" << endl;
	Ortogonal();
	cout << "Метод Гаусса" << endl;
	Gauss();

	system("pause");

}