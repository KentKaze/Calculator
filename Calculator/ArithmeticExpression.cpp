#include "Exception.h"
#include "ArithmeticExpression.h"

Operand* ArithmeticExpression::GetValue()
{
	switch (_op)
	{
		/*case OPERATOR_PLUS:
			return _a->GetValue() + _b->GetValue();		*/
	default:
		throw CA_OPERATOR_IS_INVALID;
	}


}

ArithmeticExpression::ArithmeticExpression()
{
}

ArithmeticExpression::ArithmeticExpression(ArithmeticExpression* a, ArithmeticExpression* b, OPERATOR op)
{
	_a = a;
	_b = b;
	_op = op;
}