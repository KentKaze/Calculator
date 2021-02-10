#pragma once
#include "Expression.h"
#include "Operator.h"
class ArithmeticExpression :
    public Expression
{
public:
    virtual void* GetValue();
    //ArithmeticExpression(ArithmeticExpression * a, ArithmeticExpression * b, OPERATOR op);
   /* NumberConst * operator+(ArithmeticExpression b);
    NumberConst * operator-(ArithmeticExpression b);
    NumberConst * operator*(ArithmeticExpression b);
    NumberConst * operator/(ArithmeticExpression b);*/
private:
    ArithmeticExpression * _a;
    ArithmeticExpression * _b;
    OPERATOR _op;
};

