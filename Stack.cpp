#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    

    return 0;
}
