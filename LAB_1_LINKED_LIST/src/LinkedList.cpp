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
  	newNode->next = Head;

 	 Head = newNode;

	if (isEmpty())
  	{
    	Tail = newNode;
  	}
}

/* adding data to tail in the linkedList */
void LinkedList::addToTail(int data)
{
  Node *newNode = new Node();

  newNode->info = data;

  if (!isEmpty())
  {
    Tail->next = newNode;
  }
  else
  {
    Head = newNode;
  }
  Tail = newNode;
}

/* adding data in the middle of two nodes in linkedList */
void LinkedList::add(int data, Node *predecessor)
{
  Node *newNode = new Node();

  newNode->info = data;

  newNode->next = predecessor->next;
  predecessor->next = newNode;
}

/* displaying all elements in the linkedList */
void LinkedList::traverse()
{
	Node *p = Head;
	std::cout << "Head Node: " << p->info << std::endl;
	std::cout << "Tail Node: " << Tail->info<< std::endl;

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

/* remove elements from the tail node of the linked list */
void LinkedList::removeFromTail()
{
  Node *nodeToDelete = Tail;
  Node *temp = Head;

  if (Head == Tail)
  {
    Tail = NULL;
    Head = NULL;
  }
  else
  {
    while (temp->next != Tail)
    {
      temp = temp->next;
    }
    Tail = temp;
    Tail->next = NULL;
  }
  delete nodeToDelete;
}

/* remove elements from any node of linkedList */
void LinkedList::remove(int data)
{

  if (!isEmpty()) 
    {
    if (Head->info == data)
    {
      removeFromHead();
    }
    else
    {
      Node *prev = Head;
      Node *temp = Head->next;

      while (temp != NULL)
      {
        if (temp->info == data)
          break;

        prev = prev->next;
        temp = temp->next;
      }

      if (temp != NULL)
      {
        prev->next = temp->next;

        delete temp;

        if (prev->next == NULL)
        {
          Tail = prev;
        }
      }
    }
  }
  else
  {
    std::cout << data << " is not found" << std::endl;
  }
}

/* returns data pointed to by a pointer to data */
Node *LinkedList::retrieve(int data)
{
  Node *temp = Head;

  while (temp != NULL)
  {
    if (temp->info == data)
    {
      return temp;
    }
    else
      temp = temp->next;
  }

  return NULL;
}

/* search for matching elements in the linked list */
bool LinkedList::search(int data)
{
  Node *temp = Head;

  while (temp != NULL)
  {
    if (temp->info == data)
    {
      return true;
    }
    temp = temp->next;
  }

  return false;
}
