#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };
    
    Node* topNode;
    int stackSize;

public:
    // Constructor
    Stack();
    
    // Destructor
    ~Stack();
    
    // Copy constructor
    Stack(const Stack& other);
    
    // Assignment operator
    Stack& operator=(const Stack& other);
    
    // Push element onto stack
    void push(const T& value);
    
    // Remove top element
    void pop();
    
    // Get top element
    T& top();
    const T& top() const;
    
    // Check if stack is empty
    bool empty() const;
    
    // Get size of stack
    int size() const;
    
    // Clear the stack
    void clear();
};

#endif 
