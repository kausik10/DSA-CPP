#include <iostream>
#include "LinkedList.h"

Node::Node() : next(NULL) {}
Node::Node(int info, Node *next) : info(info), next(next) {}

LinkedList::LinkedList() : Head(NULL), Tail(NULL) {}

bool LinkedList::isEmpty()
{
  if (Head == NULL && Tail == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

/* adding data into head of linked list */
void LinkedList::addToHead(int data)
{
  
	Node *newNode = new Node();

 	newNode->info = data;
  std::cout << "Data added: " << data <<std::endl;
  newNode->next = Head;

 	Head = newNode;

	if (isEmpty())
  	{
    	Tail = newNode;
  	}
}


/* displaying all elements in the linkedList */
void LinkedList::traverse()
{
	Node *p = Head;
	std::cout << "Head Node: " << p->info << std::endl;

   while (p != NULL)
  {
    std::cout << p->info << "\t";
    p = p->next;
  }
  std::cout << std::endl;
}

/* deletion from the head node of the linkedList */
int LinkedList::removeFromHead()
{
  int data;
  if (!isEmpty())
  {
    Node *nodeToDelete = Head;

    Head = nodeToDelete->next;
    data = nodeToDelete->info;

    delete nodeToDelete;
    return data;
  }
  else
  {
    std::cout << "\nList is Empty" << std::endl;
  }

  return 0;
}
