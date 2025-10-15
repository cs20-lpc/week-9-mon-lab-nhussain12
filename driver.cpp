#include "LinkedQueue.hpp"
#include <string>
#include <iostream>

using namespace std;

int main() {

    // Create a queue of integers and a queue of string values
    LinkedQueue<int> intQueue;
    LinkedQueue<string> stringQueue;

    // Check if integer queue is empty
    if (intQueue.isEmpty()) {
        cout << "Integer Queue is empty" << endl;
    } else {
        cout << "Integer Queue is NOT empty" << endl;
    }

    // Attempt to display front and back
    try {
        cout << intQueue.front() << endl;
    } catch(string& e) {
        cout << e << endl;
    }

    try {
        cout << intQueue.back() << endl;
    } catch(string& e) {
        cout << e << endl;
    }

    // Attempt to dequeue empty queue
    try {
        intQueue.dequeue();
    } catch (string& e) {
        cout << e << endl;
    }

    // Check if string queue is empty
    if (stringQueue.isEmpty()) {
        cout << "String Queue is empty" << endl;
    } else {
        cout << "String Queue is NOT empty" << endl;
    }

    // Attempt to display front and back
    try {
        cout << stringQueue.front() << endl;
    } catch(string& e) {
        cout << e << endl;
    }

    try {
        cout << stringQueue.back() << endl;
    } catch(string& e) {
        cout << e << endl;
    }

    // Enqueue integer queue
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.enqueue(3);
    intQueue.enqueue(4);
    intQueue.enqueue(5);
    intQueue.enqueue(6);

    // Get integer queue's length, front, and back
    cout << "Integer Queue Front: " << intQueue.front() << endl;
    cout << "Integer Queue Back: " << intQueue.back() << endl;
    cout << "Integer Queue Length: " << intQueue.getLength() << endl;

    // Dequeue integer queue and get new length and back
    intQueue.dequeue();
    intQueue.dequeue();
    cout << "Integer Queue New Front: " << intQueue.front() << endl;
    cout << "Integer Queue New Length: " << intQueue.getLength() << endl;

    // Enqueue string queue
    stringQueue.enqueue("Apples");
    stringQueue.enqueue("Bananas");

    // Get string queue's length, front, and back
    cout << "String Queue Front: " << stringQueue.front() << endl;
    cout << "String Queue Back: " << stringQueue.back() << endl;
    cout << "String Queue Length: " << stringQueue.getLength() << endl;

    // Dequeue string queue and get new length and back
    stringQueue.dequeue();
    stringQueue.dequeue();

    try {
        cout << "String Queue New Front: " << stringQueue.front() << endl;
    } catch (string& e) {
        cout << e << endl;
    }
    cout << "String Queue New Length: " << stringQueue.getLength() << endl;

    // Create a new integer queue
    LinkedQueue<int> intQueue2;
    intQueue2.enqueue(2);
    intQueue2.enqueue(4);
    intQueue2.enqueue(6);

    // Try to copy from intQueue2 into intQueue
    try {
        intQueue = intQueue2;
    } catch (string& e) {
        cout << e << endl;
    }

    // Switch the sides to ensure a proper copy
    intQueue2 = intQueue;

    cout << "Integer Queue Front: " << intQueue.front() << endl;
    cout << "Integer Queue Back: " << intQueue.back() << endl;
    cout << "Integer Queue Length: " << intQueue.getLength() << endl;
    cout << "Integer Queue 2 Front: " << intQueue2.front() << endl;
    cout << "Integer Queue 2 Back: " << intQueue2.back() << endl;
    cout << "Integer Queue 2 Length: " << intQueue2.getLength() << endl;


    // Clear integer queue
    intQueue.clear();

    // Check for emptiness
    if (intQueue.isEmpty()) {
        cout << "Integer Queue is empty" << endl;
    } else {
        cout << "Integer Queue is NOT empty" << endl;
    }

    return 0;
}