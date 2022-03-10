#ifndef __SUBSTRACT_EXPRESSION_HPP__
#define __SUBSTRACT_EXPRESSION_HPP__

#include "Expression.hpp"   
class SubstractExpression : public BinaryExpression{
    public:
        SubstractExpression(Expression* x, Expression* y);
        int solve();

};
#endif