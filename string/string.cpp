#include "string.h"

String::String() {
	str = new char;
	*str = '\0';
}

String::String(const char *str) {
	this->str = new char[strlen(str)+1];
	strcpy(this->str,str);
}

char* String::getString() const {
	return str;
}

void String::setString(const char* str) {
	this->str = new char[strlen(str)+1];
	strcpy(this->str,str);
}

String String::operator +(String s) const {
    String temp;

    strcpy(temp.str,this->str);
    strcat(temp.str,s.str);
    
    return temp;
}

void String::operator +=(String s) {
	char *temp = new char[strlen(str)+strlen(s.str)+1];

	strcpy(temp,str);
	strcat(temp,s.str);

    str = temp;
}
