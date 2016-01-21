#include "stack.h"

Stack::Stack() {
	stack = new int[size];
	top = -1;
}
    	
Stack::~Stack() {
	delete[] stack;
}
    	
void Stack::push(int data) {
	if(top==size) {
		std::cout << "Full stack!" << std::endl;
	} else {
		stack[++top] = data;
	}
}

void Stack::pop() {
	if(top==-1) {
		std::cout << "Empty stack!" << std::endl;    		
	} else {
		top--;
	}
}

int Stack::getTop() {
	if(top != -1) {
		return stack[top];
	} else {
		std::cout << "Empty stack!" << std::endl;    		
	}
}

