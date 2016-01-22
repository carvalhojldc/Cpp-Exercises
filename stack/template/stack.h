#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

template <class Type>
class Stack {
	private:
        Type *stack;
		int top;
		static const int size = 50;
	
	public:
        Stack() {
            stack = new Type[size];
            top = -1;
        }

        ~Stack() {
            delete[] stack;
        }

        void push(Type data) {
            if(top==size) {
                std::cout << "Full stack!";
            } else {
                stack[++top] = data;
            }
        }

        void pop() {
            if(top==-1) {
                std::cout << "Empty stack!";
            } else {
                top--;
            }
        }

        Type getTop() {
            if(top != -1) {
                return stack[top];
            } else {
                std::cout << "Empty stack!";
                return NULL;
            }
        }
};

#endif // _STACK_H_
