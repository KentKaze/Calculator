#include "LongLongConst.h"
#include "DoubleConst.h"
#include <typeinfo>

void * LongLongConst::GetValue()
{
	return & _value;
}

NumberConst* LongLongConst::operator+(long long* b)
{
	return new LongLongConst(_value + *b);
}

NumberConst* LongLongConst::operator+(double* b)
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

