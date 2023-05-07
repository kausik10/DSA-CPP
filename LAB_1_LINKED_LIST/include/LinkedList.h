#include <iostream>

class Node
{
public:
  int info;
  Node *next = NULL;

  Node();
  Node(int info, Node *next);
};

class LinkedList
{
private:
  Node *Tail;
  Node *Head;

public:
  LinkedList();

  bool isEmpty();

  // adding elements to linkedList
  void addToHead(int data);
  void addToTail(int data);
  void add(int data, Node *predecessor);

  // Traversing through linkedList. i.e. displaying all the components of linkedList
  void traverse();

  // Removal from linkedList
  int removeFromHead();
  void removeFromTail();
  void remove(int data);

  // Retrieve particular node info
  Node *retrieve(int data);

  // search matching elements in the linkedList:
  bool search(int data);
};
