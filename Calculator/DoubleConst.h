#pragma once
#include "NumberConst.h"
class DoubleConst
	: public NumberConst
{
public:
	//static const long MinValue = 0;
	const double InitialValue = 0.0;
	//static const long MaxValue = 9223372036854775807;
	Operand* GetValue();

	NumberConst* operator+ (long*);
	NumberConst* operator+ (double*);
	NumberConst* operator- (ArithmeticExpression *);
	NumberConst* operator* (ArithmeticExpression *);
	NumberConst* operator/ (ArithmeticExpression *);
	DoubleConst(double);
	DoubleConst();
private:
	double _value;
};