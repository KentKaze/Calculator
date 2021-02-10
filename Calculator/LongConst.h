#pragma once
#include "NumberConst.h"

class LongConst
	: public NumberConst
{
public:
	static const long MinValue = 0;
	void * GetValue();
	LongConst(long value);
	LongConst();
private:
	long _value;
};

