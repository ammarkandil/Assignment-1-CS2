#include "Queues.hpp"

queue::queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 

 

Car queue::dequeue()

    if (isEmpty())
    {
        cout<< "Queue is empty";
        
    }
 
    int x = arr[front];
    cout << "Removing " << x << endl;
 
    front = (front + 1) % capacity;
    count--;
 
    return x;
}
 

void queue::enqueue(Car item)
{
   
    if (isFull())
    {
        cout << "Queue is full\n";
        
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 

int queue::peek()
{
    if (isEmpty())
    {
        cout << "is empty";
    
    }
    return arr[front];
}
 

int queue::size() {
    return count;
}
 

bool queue::isEmpty() {
    return (size() == 0);
}
 

bool queue::isFull() {
    return (size() == capacity);
}
 
