#include <iostream>
#include "ArrayStack.h"
#include "LinkedList.h"


int main()
{
  LinkedList list;

  std::cout << "Elements added to linked list: " << std::endl;

  list.addToHead(5); 
  list.addToHead(70); 
  list.addToHead(49); 
  list.addToHead(55);
  list.addToHead(333);

  std::cout<< "___________________________________________________________"<< std::endl;

// displays all the element
  std::cout << "Elements of the linked list" << std::endl; 
  
  list.traverse(); 

  std::cout<< "___________________________________________________________"<< std::endl;


  std::cout << "Elements removed from linked list: " << std::endl;
  std::cout<< "Element removed: " << list.removeFromHead() << std::endl; 
  std::cout<< "Element removed: " << list.removeFromHead() << std::endl; 
  std::cout<< "Element removed: " << list.removeFromHead() << std::endl; 
  
  std::cout << "\nElements of the List after deletion: " << std::endl;
  list.traverse(); 


  std::cout<< "___________________________________________________________"<< std::endl;
  std::cout<< "Implementation of Stack using arrays" << std::endl;
  std::cout<< "___________________________________________________________"<< std::endl;

  ArrayStack Stack(SIZE);
  int element;
  std::cout<< "Max Stack size: "<< SIZE << std::endl;
  std::cout<< "___________________________________________________________"<< std::endl;



	std::cout<< std::boolalpha << Stack.push(10); 
  Stack.top(element);
  std::cout<< " Pushed element: " <<element<< std::endl;

  std::cout<< std::boolalpha << Stack.push(20);
 Stack.top(element);
  std::cout<< " Pushed element: " <<element<< std::endl;


 std::cout<< std::boolalpha  <<Stack.push(30);
 Stack.top(element);
  std::cout<< " Pushed element: " <<element<< std::endl;


 std::cout<< std::boolalpha<<  Stack.push(40);
  Stack.top(element);
  std::cout<< " Pushed element: " <<element<< std::endl;

std::cout<< std::boolalpha<<  Stack.push(50);
 Stack.top(element);
  std::cout<< " Pushed element: " <<element<< std::endl;
  
  std::cout<< std::boolalpha<< "Is Stack full?: "<< Stack.isFull()<< std::endl;
  std::cout<< std::boolalpha<<"Is Stack empty?: "<< Stack.isEmpty()<< std::endl;
  
  std::cout<< "___________________________________________________________"<< std::endl;


 std::cout << Stack.pop(element) << " Popped element: " << element << std::endl ;
 std::cout << Stack.pop(element) << " Popped element: " << element << std::endl ;
 std::cout << Stack.pop(element) << " Popped element: " << element << std::endl ;
 std::cout << Stack.pop(element) << " Popped element: " << element << std::endl ;
 std::cout << Stack.pop(element) << " Popped element: " << element << std::endl ;

  std::cout<< std::boolalpha<< "Is Stack full?: "<< Stack.isFull()<< std::endl;
  std::cout<< std::boolalpha<<"Is Stack empty?: "<< Stack.isEmpty()<< std::endl;
	

	return 0;
}
