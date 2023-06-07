#include "LinkedList.h"

Queue::Queue(int MAXSIZE): MAXSIZE(maxQueueSize), rear(0), front(0) {}

/* Checks whether Queue is empty or not */
bool Queue::isEmpty()
{
	return (rear == front);
}

/* Checks whether Queue is full or not */
bool Queue::isFull(){
	return (front == (rear + 1) % maxQueueSize);
}

// this will add element to the queue
void Queue::enqueue(int value)
{
	if (!isFull())
	{

		rear = (rear + 1) % maxQueueSize;
		data[rear] = value;
	}
	else{
		Queue::error();
	}
		
}
// this will remove element from queue
int Queue::dequeue(){

	if (!isEmpty())
	{
		front = (front + 1) % maxQueueSize;
		return data[front];
	}
	else{
		Queue::error();
	}
	return 0;
}
// returns the front_element of the queue
int Queue::front_element(){
	return data[front];
}

// returns the rear element of the queue
int Queue::rear_element(){
	return data[rear];
}
