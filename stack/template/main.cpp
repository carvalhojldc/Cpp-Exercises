#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack<const char *> stack;
    Stack<int> stack2;

    stack.push("python");
    stack.push("java");
    stack.push("c++");
    stack.push("ruby");

    stack.pop();

    stack2.push(41);
    stack2.push(90);
    stack2.push(54);
    stack2.pop();

    cout << "stack.getTop(): " << stack.getTop() << endl;
    cout << "stack2.getTop(): " << stack2.getTop() << endl;

    return 0;
}

