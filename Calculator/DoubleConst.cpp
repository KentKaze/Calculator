#include "DoubleConst.h"

Operand* DoubleConst::GetValue()
{
	return this;
}

DoubleConst::DoubleConst(double value)
{
	_value = value;
}

DoubleConst::DoubleConst()
	: DoubleConst(0.0f)
{ }
