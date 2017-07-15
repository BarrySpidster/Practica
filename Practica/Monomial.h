#pragma once
class Monomial
{
	float coeffic;
	float degree;
	float number;

public:
	Monomial();
	Monomial(float coeffic,int degree,float number);
	
	int GetDegree();
	float GetCoeff();
	float GetNumber();
	
	void SetDegree(float degree);
	void SetCoeff(float coef);
	void SetNumber(float number);
	void Delete();
	
	Monomial Multiplication(Monomial x1, Monomial x2);
	Monomial GetMultiplier(Monomial x1, Monomial x2);
	Monomial Substraction(Monomial x2);
	Monomial Div(Monomial x1,Monomial x2);
	~Monomial();
};

