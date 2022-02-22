#ifndef __NEGATIVE_EXPRESSION_HPP__
#define __NEGATIVE_EXPRESSION_HPP__

#include "Expression.hpp"   
class NegativeExpression : public UnaryExpression{
    public:
        NegativeExpression(Expression* x);
        int solve();
};
#endif