#pragma once
#include "Operand.h"
//#include "Operator.h"
class Expression
	: public Object
{
	//int pp;
//public:
	//Expression * a;
	//Expression * b;
	//OPERATOR op;
public:
	virtual Operand* GetValue() = 0;
	virtual char* ToString();
protected:
	Expression();
	/*
	virtual Expression GetA() = 0;
	virtual Expression GetB() = 0;
	virtual Expression GetOp() = 0;*/
//
//protected:
//	OPERATOR op;
};

