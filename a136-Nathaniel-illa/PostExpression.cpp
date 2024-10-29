#include "PostExpression.hpp"
#include <stack>
#include <iostream>
#include <cctype>  // for isdigit()

using namespace std;

PostExpression::PostExpression() : expression("") {}

PostExpression::PostExpression(string exp) : expression(exp) {}

bool PostExpression::isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int PostExpression::calculate(int left, int right, char op) {
    switch (op) {
        case '+': return left + right;
        case '-': return left - right;
        case '*': return left * right;
        case '/': return right != 0 ? left / right : 0;  // Integer division
        default: return 0;
    }
}

void PostExpression::setExpression(string postfix) {
    expression = postfix;
}

int PostExpression::evaluate() {
    stack<int> stk;
    for (char ch : expression) {
        if (isdigit(ch)) {
            stk.push(ch - '0');  // Convert char to int
        } else if (isOperator(ch)) {
            int right = stk.top(); stk.pop();
            int left = stk.top(); stk.pop();
            int result = calculate(left, right, ch);
            stk.push(result);
        }
    }
    return stk.empty() ? 0 : stk.top();
}

void PostExpression::printExpression() {
    cout << "Expression: " << expression << endl;
}