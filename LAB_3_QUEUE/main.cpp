#include "LinkedList.h"

int main()
{

	Queue q1(maxQueueSize);
	int value;

	q1.enqueue(10);

	std::cout << "Enqueed data: " << q1.rear_element() << std::endl;
	q1.enqueue(20);
	std::cout << "Enqueed data: " << q1.rear_element() << std::endl;
	
	q1.enqueue(30);
	std::cout << "Enqueed data: " << q1.rear_element() << std::endl;

	q1.enqueue(40);
	std::cout << "Enqueed data: " << q1.rear_element() << std::endl;

std::cout << "Is Queue Full? " <<std::boolalpha << q1.isFull() << std::endl;

	
	std::cout << "Data dequeued: "<< q1.dequeue() <<std::endl;
	std::cout << "Data dequeued: "<<q1.dequeue() << std::endl;
	std::cout << "Data dequeued: "<<q1.dequeue() << std::endl;
	std::cout << "Data dequeued: "<<q1.dequeue() << std::endl;
	std::cout << "Is Queue Empty? " << std::boolalpha << q1.isEmpty() << std::endl;
	
}