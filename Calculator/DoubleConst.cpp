#include "DoubleConst.h"

void* DoubleConst::GetValue()
{
	return nullptr;
}

DoubleConst::DoubleConst(double value)
{
	_value = value;
}

DoubleConst::DoubleConst()
	: DoubleConst(0.0f)
{ }
