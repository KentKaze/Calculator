#pragma once
#include "NumberConst.h"

class LongLongConst
	: public NumberConst
{
public:
	const long long MinValue = 0;
	const long long MaxValue = 9223372036854775807;
	void * GetValue();

	NumberConst* operator+ (long long *);
	NumberConst* operator+ (double *);
	NumberConst* operator- (ArithmeticExpression *);
	NumberConst* operator* (ArithmeticExpression *);
	NumberConst* operator/ (ArithmeticExpression *);
	LongLongConst(long long);
	LongLongConst();
private:
	long long _value;
};

