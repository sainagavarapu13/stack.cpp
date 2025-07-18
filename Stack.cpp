#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;

    stack.push(23);
    stack.push(875);
    stack.push(456);

    stack.display();

    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    

    return 0;
}
