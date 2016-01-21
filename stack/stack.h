#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

class Stack {
	private:
		int *stack;
		int top;
		static const int size = 50;
	
	public:
		Stack();
		~Stack();    	
		void push(int data);
		void pop();    	
		int getTop();
};

#endif // _STACK_H_
