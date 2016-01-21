#ifndef _PERSON_H_
#define _PERSON_H_

#include <cstring>

class Person {
	private:
		char *name;
		int age;

	public:
		Person();
		Person(const char *name, int age);
		~Person();
		char* getName();
		int getAge();
		void setName(const char *name);
		void setAge(int age);
};

#endif
