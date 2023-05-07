
#include <iostream>
#include "ArrayStack.h"

ArrayStack::ArrayStack(int MAXSIZE): MAXSIZE(SIZE), _topidx(-1), data(new int[MAXSIZE]) {}

bool ArrayStack::isEmpty() const{
	return _topidx < 0;
}

bool ArrayStack::isFull() const{
	return _topidx == MAXSIZE - 1;
}

bool ArrayStack::push(const int element){

	if (!isFull()){
		data[++_topidx] = element;
		return true;
	}
	else{

		std::cout << "Stack is full\n" ;
		return false;
	}
}

bool ArrayStack::pop(int &element){

	if (!isEmpty()){
		element = data[_topidx--];
		return true;
	}
	else{
		std::cout << "Can't pop. Stack is empty\n";
		return false;
	}
}
bool ArrayStack::top(int &element) const{

	if (!isEmpty()){
		element=data[_topidx];
		return true;
	}
	else{
		std::cout << "Stack is empty\n" ;
		return false;
	}
}
