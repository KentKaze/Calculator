#pragma once
#include "Operand.h"
#include "Operator.h"
class Expression
{
public:
	//Expression * a;
	//Expression * b;
	//OPERATOR op;

	virtual Operand Calculate() = 0;
	virtual Expression GetA() = 0;
	virtual Expression GetB() = 0;
	virtual Expression GetOp() = 0;

protected:
	OPERATOR op;
};

