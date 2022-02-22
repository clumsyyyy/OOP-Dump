#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression *x, Expression *y) :
    BinaryExpression(x, y) {
}

int SubstractExpression::solve(){
    return BinaryExpression::x->solve() - BinaryExpression::y->solve();
}