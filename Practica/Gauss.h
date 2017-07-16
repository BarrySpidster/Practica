#pragma once
#include <iostream>
using namespace std;

void Gauss()
{
	int n = 3, k;
	cout << "Введите количество строк массива" << endl;
	cin >> n;
	cout << "Введите количество столбцов" << endl;
	cin >> k;
	float **a = new float*[n];
	float *b = new float[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new float[k];
	}
	cout << "Введите элементы массива A " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << "A[" << i << "," << j << "] ";
			std::cin >> a[i][j];
			cout << endl;
		}
	}
	cout << "Введите матрицу B" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "]= ";
		cin >> b[i];
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "," << j << "]= " << a[i][j]<<" ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i<<"] " <<b[i]<< " ";
	}
	float r;
	/*Прямой ход*/

	for (int l = 1; l < n; l++)//здесь счетчик с 0 а должен быть с 
	{
		for (int j = l + 1; j < n; j++)
		{
			r = a[j][ l] / a[l][l];
			for (int i = l; i < n; i++)//
			{
				a[j][i] = a[j][i] - r*a[l][i];
			}
			b[j] = b[j] - r*b[l];
		}
	}
	float g;
	float *x = new float[n];

	/*Обратный ход*/
	for (int l = n-1; l >=0; l--)
	{
		r = 0;
		for (int j = l + 1; j < n; j++)
		{
			g = a[l][j] * x[j];
			r = r + g;
		}
		x[l] = (b[l] - r) / a[l][l];
	}
	cout << endl;
	cout << "Корни системы" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "x[" << i << "]= " << x[i] << endl;
	}

}