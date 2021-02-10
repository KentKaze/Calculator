#pragma once
#include "NumberConst.h"
#include "Operand.h"

class LongLongConst
	: public NumberConst
{
public:
	//const long long MinValue = -9223372036854775808;
	//const long long MaxValue = 9223372036854775807;
	Operand* GetValue();

	NumberConst* operator+ (long long*);
	NumberConst* operator+ (long*);
	NumberConst* operator+ (int*);
	NumberConst* operator+ (short *);
	NumberConst* operator+ (char*);
	NumberConst* operator+ (long double*);
	NumberConst* operator+ (double*);
	NumberConst* operator+ (float*);
	//NumberConst* operator+ (void*);
	NumberConst* operator- (ArithmeticExpression *);
	NumberConst* operator* (ArithmeticExpression *);
	NumberConst* operator/ (ArithmeticExpression *);
	LongLongConst(long long);
	LongLongConst();
private:
	long long _value;
};

