#pragma once
#include "NumberConst.h"
#include "Operand.h"
#include "BufferProvider.h"

class LongLongConst
	: public NumberConst
{
public:
	//const long long MinValue = -9223372036854775808;
	//const long long MaxValue = 9223372036854775807;
	Operand* GetValue();
	virtual const char* ToString(char* const buffer);
	virtual const char* ToString();	
	NumberConst* operator+ (long long);
	NumberConst* operator+ (long);
	NumberConst* operator+ (int);
	NumberConst* operator+ (short);
	NumberConst* operator+ (char);
	NumberConst* operator+ (long double);
	NumberConst* operator+ (double);
	NumberConst* operator+ (float);
	NumberConst* operator+ (LongLongConst*);
	NumberConst* operator- (ArithmeticExpression *);
	NumberConst* operator* (ArithmeticExpression *);
	NumberConst* operator/ (ArithmeticExpression *);
	LongLongConst(long long);
	LongLongConst();
private:
	long long _value;
};

