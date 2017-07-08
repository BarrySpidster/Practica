#pragma once
class Polinom
{
	float coeffic;
	int degree;
	float number;

public:
	Polinom();
	Polinom(float coeffic,int degree,float number);
	
	int GetDegree();
	float GetCoeff();
	float GetNumber();
	void Division();
	void Print();
	Polinom Multiplication(Polinom x1,Polinom x2);
	~Polinom();
};

