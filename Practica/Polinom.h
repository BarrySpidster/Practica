#pragma once
class Polinom
{
	float coeffic;
	float degree;
	float number;

public:
	Polinom();
	Polinom(float coeffic,int degree,float number);
	
	int GetDegree();
	float GetCoeff();
	float GetNumber();
	void Division();
	void Print();
	void SetDegree( float degree);
	void SetCoeff(float coef);
	void SetNumber(float number);
	Polinom Multiplication(Polinom x1,Polinom x2);
	Polinom GetMultiplier(Polinom x1, Polinom x2);
	~Polinom();
};

