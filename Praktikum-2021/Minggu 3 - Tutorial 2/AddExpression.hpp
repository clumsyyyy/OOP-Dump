#ifndef __ADD_EXPRESSION_HPP__
#define __ADD_EXPRESSION_HPP__

#include "Expression.hpp"   
class AddExpression : public BinaryExpression{
    public:
        AddExpression(Expression* x, Expression* y);
        int solve();

};
#endif