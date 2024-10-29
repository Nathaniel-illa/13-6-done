#ifndef POSTEXPRESSION_H
#define POSTEXPRESSION_H

#include <string>
#include <stack>
#include <iostream>

class PostExpression {
private:
    string expression;

    bool isOperator(char ch);
    int calculate(int left, int right, char op);

public:
    PostExpression();  // Default constructor
    PostExpression(string exp);  // Parameterized constructor

    void setExpression(string postfix);
    int evaluate();
    void printExpression();
};

#endif