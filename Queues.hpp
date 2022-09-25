 #ifndef Queues_hpp
#define Queues_hpp
#include <iostream>
#include "Car.hpp"
const int SIZE =100;

using namespace std;

class queue{
private:
    int *arr;
        int capacity;
        int front;
        int rear;
        int count;
public:
    queue(int size = SIZE);
       Car dequeue();
       void enqueue(Car x);
       int peek();
       int size();
       bool isEmpty();
       bool isFull();
   };


