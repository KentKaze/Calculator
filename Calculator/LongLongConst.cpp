#include "LongLongConst.h"
#include "DoubleConst.h"
#include <iostream>
#include <string>

Operand * LongLongConst::GetValue()
{
	return this;
}

const char * LongLongConst::ToString(char * const buffer)
{
	sprintf_s(buffer, 100, "%lld", _value);
	return buffer;
}

const char* LongLongConst::ToString()
{	
	sprintf_s(BufferProvider::NumberBuffer, 100, "%lld", _value);
	return BufferProvider::NumberBuffer;
}


NumberConst* LongLongConst::operator+(long long b)
{
	return new LongLongConst(_value + b);
}

NumberConst* LongLongConst::operator+(long b)
{
	return new LongLongConst(_value + b);
}

NumberConst* LongLongConst::operator+(int b)
{
	return new LongLongConst(_value + b);
}

NumberConst* LongLongConst::operator+(short b)
{
	return new LongLongConst(_value + b);
}

NumberConst* LongLongConst::operator+(char b)
{
	return new LongLongConst(_value + b);
}

NumberConst* LongLongConst::operator+(long double b)
{
	return nullptr;
}

NumberConst* LongLongConst::operator+(double b)
{
	return new DoubleConst((double)_value + b);
}

NumberConst* LongLongConst::operator+(float b)
{
	return new DoubleConst((double)_value + b);
}

NumberConst* LongLongConst::operator+(LongLongConst* b)
{
	return new LongLongConst(_value + b->_value);
}

LongLongConst::LongLongConst(long long value)
{
	_value = value;
}

LongLongConst::LongLongConst()
	: LongLongConst(0)
{ }

