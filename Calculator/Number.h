#pragma once
#include "ArithmeticExpression.h"
#include "Operand.h"
class Number :
	public ArithmeticExpression, public Operand
{
public:
	virtual const char* ToString();
protected:
	Number();
};

