#include "PostExpression.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Simple test 1
    string postfix1 = "243*+5+";
    cout << "Postfix: " << postfix1 << endl;
    PostExpression p1(postfix1);
    cout << "Expected: " << 2 + 4 * 3 + 5 << endl;
    cout << "Evaluate: " << p1.evaluate() << endl;

    // Simple test 2
    string postfix2 = "34562*+*+9-";
    cout << "Postfix: " << postfix2 << endl;
    PostExpression p2(postfix2);
    cout << "Expected: " << 3 + (4 * (5 + (6 * 2))) + 9 << endl;
    cout << "Evaluate: " << p2.evaluate() << endl;

    // Simple test 3
    string postfix3 = "345*+23*+95-2*+";
    cout << "Postfix: " << postfix3 << endl;
    PostExpression p3(postfix3);
    cout << "Expected: " << (3+4*5)+2*3+(9-5)*2 << endl;
    cout << "Evaluate: " << p3.evaluate() << endl;

    return 0;
}