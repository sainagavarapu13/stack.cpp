// Queue.cpp
#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    queue.display();

    cout << "Front element is: " << queue.peek() << endl;
    cout << "Queue size: " << queue.getSize() << endl;

    cout << queue.dequeue() << " dequeued from queue\n";
    cout << queue.dequeue() << " dequeued from queue\n";

    queue.display();
retrun 0;
}
