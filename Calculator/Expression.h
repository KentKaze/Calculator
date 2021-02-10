#pragma once
#include "Operand.h"
#include "Operator.h"
class Expression
{
public:
	Operand a;
	Operand b;
	Operator op;

	virtual Operand Calculate();
};

