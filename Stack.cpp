#include "st.h"
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

    cout << stack.pop() << " popped from stack\n";
    cout << stack.pop() << " popped from stack\n";

    stack.display();

    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size: " << stack.getSize() << endl;

    cout << stack.pop() << " popped from stack\n";
    cout << stack.pop() << " popped from stack\n";  // Underflow

    return 0;
}
