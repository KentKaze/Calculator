#include "ArithmeticExpression.h"
#include "Exception.h"

//Operand ArithmeticExpression::GetValue()
//{
//	//switch (op)
//	//{
//	//	case OPERATOR_PLUS:
//	//		return 
//	//	break;
//	//}
//	//return ;*/
//	//Operand* r = new Operand();
//	//
//	//return *r;
//}

void* ArithmeticExpression::GetValue()
{
	switch (_op)
	{
	/*case OPERATOR_PLUS:
		return _a->GetValue() + _b->GetValue();
		break;*/
	default:
		throw CA_OPERATOR_IS_INVALID;
	}
	
	
}

ArithmeticExpression::ArithmeticExpression(ArithmeticExpression* a, ArithmeticExpression* b, OPERATOR op)
{
	_a = a;
	_b = b;
	_op = op;
}
