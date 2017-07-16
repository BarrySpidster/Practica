#pragma once
#include<math.h>
#include <iostream>


float GetModul(float *coordinaty,float size)
{
	float count = 0;
	for (int i = 0; i < size; i++)
	{
		count += (coordinaty[i])*(coordinaty[i]);
	}
	return abs(sqrt(count));

}

float ScalarMultiplication(float* t1, float *t2,int n )
{
	float count = 0;
	for ( int i = 0; i < n; i++)
	{
		count += t1[i]*t2[i];
	}
	return count;
}

float* GetSum(float *t1, float *t2, int size)
{
	for (int i = 0; i < size; i++)
	{
		t1[i] = t1[i] + t2[i];
	}
	return t1;
}
float *Substration(float* t1, float* t2, int n)
{
	for (int i = 0; i < n; i++)
	{
		t1[i] = t1[i] - t2[i];
	}
	return t1;
}

float* MultVectorToNumb(float* t, float number, int size)
{
	for (int i = 0; i < size; i++)
	{
		t[i] = t[i] * number;
	}
	return t;
}

void Ortogonal()
{
	float m1[4] = { 1,2,2,-1 };
	float m2[4] = { 1,1,-5,3 };
	float m3[4] = { 3,2,8, - 7 };

	float modul = GetModul(m1, 4);
	float* t1 = m1;
	float sumt = ScalarMultiplication(t1, t1, 4);
	float k = (ScalarMultiplication(m2, m1,4) / ScalarMultiplication(t1, t1,4));
	float* t2 = Substration(m2, MultVectorToNumb(t1, k, 4),4);

	float k2 = ScalarMultiplication(m3, t2, 4) / ScalarMultiplication(t2, t2,4);
	float k3= ScalarMultiplication(m3, t1, 4) / ScalarMultiplication(t1, t1, 4);
	float* t3 = Substration(m3, MultVectorToNumb(t2, k, 4), 4);
		t3 = Substration(t3, MultVectorToNumb(t1, k3,4),4);
	
	std::cout << "(";
	for (int i = 0; i < 4; i++)
	{
		std::cout << t1[i]<<",";
	}
	std::cout <<")"<< std::endl;
	std::cout << "(";
	for (int i = 0; i < 4; i++)
	{
		std::cout << t2[i] << ",";
	}
	std::cout << ")"<<std::endl;
	std::cout << "(";
	for (int i = 0; i < 4; i++)
	{
		std::cout << t3[i] << ",";
	}
	std::cout << ")"<<std::endl;
}