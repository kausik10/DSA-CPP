#include <iostream>
#define maxQueueSize 5
class Queue{
public:

	Queue(int MAXSIZE);
	
	void enqueue(int value);
	int dequeue();
	bool isEmpty();
	bool isFull();
	int front_element();
	int rear_element();
	void error(){
		std::cout << "Queue Overflow" << std::endl;
	}
	~Queue(){delete[] data;}; 

private:
	int *data;
	int front;
	int rear;
	int MAXSIZE;

};
