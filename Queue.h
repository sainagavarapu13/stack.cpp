// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Queue class implementing the queue operations
class Queue {
private:
    Node* front;  // Pointer to the front of the queue
    Node* rear;   // Pointer to the rear of the queue
    int size;     // To keep track of the queue size

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    // Enqueue operation to add an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
        cout << value << " enqueued to queue\n";
    }

    // Dequeue operation to remove and return the front element
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        Node* temp = front;
        int dequeuedValue = temp->data;
        front = front->next;
        
        // If queue becomes empty after dequeue
        if (front == nullptr) {
            rear = nullptr;
        }
        
        delete temp;
        size--;
        return dequeuedValue;
    }

    // Peek operation to return the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Get the current size of the queue
    int getSize() {
        return size;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        Node* current = front;
        cout << "Queue elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    ~Queue() {
        Node* current = front;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};
