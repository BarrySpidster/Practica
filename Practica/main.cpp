#include <iostream>
#include <vector>
#include "Polinom.h"
using namespace std;

int Min(int *numbers, int size)
{
	int min=numbers[0];
	for (int i = 1; i < size; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}

	return min;
}

void GetNOD(int *numbers,int size)
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

		cout << "NOD " << max << endl;
	}
	else
	{
		cout << "NOD is not exist" << endl;
	}
	
}





void main()
{

	int a[4] = {3,6,9,5};
	GetNOD(a, 4);
	/*Polinom(коэффиц, степень, число)*/
	Polinom x(1, 3, 0);
	Polinom x2(12, 2, 3), c;
	c=c.Multiplication( x, x2);
	c.Print();

	system("pause");

}