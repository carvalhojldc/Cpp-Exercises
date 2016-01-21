#include "person.h"

Person::Person() {
	name = new char;
	*name = '\0';
	age = 0;
}

Person::Person(const char *name, int age) {
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
    this->age = age;
}

Person::~Person() {
    delete[] name;
    name = NULL;
}

char* Person::getName() {
    return name;
}

int Person::getAge() {
	return age;
}

void Person::setName(const char *name) {
    this->name = new char[strlen(name)+1];
    strcpy(this->name,name);
}

void Person::setAge(int age) {
	this->age = age;
}

