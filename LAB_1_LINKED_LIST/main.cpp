#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
  LinkedList list;

  list.addToTail(8); // 8 
  list.addToHead(5); // 5 8
  list.addToHead(70); // 70 5 8
  list.addToTail(22); // 70 5 8 22
  list.addToHead(49); // 49 70 5 8 22

// adding to successor of 70
  Node *pred = list.retrieve(70);
  list.add(77, pred); // 49 70 77 5 8 22

// displays all the element
  std::cout << "Elements of the linked list" << std::endl; 
  
  list.traverse(); // 49 70 77 5 8 22
  list.removeFromHead(); // 70 77 5 8 22
  list.remove(5);       // 70 77 8 22
  list.removeFromTail(); // 70 77 8
  
  std::cout << "\nElements of the List after deletion: " << std::endl;
  list.traverse(); // 70 77 8

// retrieving data ( use of retrieve() function)
  int findData = 70;
  if (list.retrieve(findData) != NULL)
  {
    std::cout << "\nValue: " << findData << " FOUND. Adress: " << &findData << std::endl;
  }
  else
  {
  std::cout << "\nValue: " << findData << " NOT found" << std::endl;
  }

// searhing for occurance of particular data in linkedList
  int searchData = 777;

	std::cout << std::boolalpha << "Search data: " << searchData << " " <<list.search(searchData) << std::endl;

  return 0;
}
