#pragma once
#include "Expression.h"
#include "Operator.h"
#include "Operand.h"
class ArithmeticExpression :
    public Expression
{
public:
    virtual Operand* GetValue();    
    ArithmeticExpression(ArithmeticExpression*, ArithmeticExpression*, OPERATOR);
protected:
    ArithmeticExpression();
    //NumberConst* a();
   /* virtual NumberConst* operator+(ArithmeticExpression*) = 0;*/
    /*NumberConst * operator-(ArithmeticExpression b);
    NumberConst * operator*(ArithmeticExpression b);
    NumberConst * operator/(ArithmeticExpression b);*/
private:
    ArithmeticExpression * _a;
    ArithmeticExpression * _b;
    OPERATOR _op;
};

