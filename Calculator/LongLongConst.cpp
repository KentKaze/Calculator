#include "LongLongConst.h"
#include "DoubleConst.h"
#include <typeinfo>

Operand * LongLongConst::GetValue()
{
	return this;
}

NumberConst* LongLongConst::operator+(long long* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(long* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(int* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(short* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(char* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(long double*)
{
	return nullptr;
}

NumberConst* LongLongConst::operator+(double* b)
{
	return new DoubleConst((double)_value + *b);
}

NumberConst* LongLongConst::operator+(float* b)
{
	return new DoubleConst((double)_value + *b);
}

LongLongConst::LongLongConst(long long value)
{
	_value = value;
}

LongLongConst::LongLongConst()
	: LongLongConst(0)
{ }

