#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() : topPtr(nullptr) {}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = topPtr;
    topPtr = newNode;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return -1;
    }
    
    Node* temp = topPtr;
    int poppedValue = temp->data;
    topPtr = topPtr->next;
    delete temp;
    return poppedValue;
}

int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return topPtr->data;
}

bool Stack::isEmpty() const {
    return topPtr == nullptr;
}

void Stack::display() const {
    if (isEmpty()) {
        cout << "Stack is Empty\n";
        return;
    }
    
    cout << "Stack elements (top to bottom): ";
    Node* current = topPtr;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
}
