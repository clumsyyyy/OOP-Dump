#include "AddExpression.hpp"

AddExpression::AddExpression(Expression *x, Expression *y) :
    BinaryExpression(x, y) {
}

int AddExpression::solve() {
    return BinaryExpression::x->solve() + BinaryExpression::y->solve();
}