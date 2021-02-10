#include "LongConst.h"

void * LongConst::GetValue()
{
	return & _value;
}

LongConst::LongConst(long value)
{
	_value = value;
}

LongConst::LongConst()
	: LongConst(MinValue)
{ }

