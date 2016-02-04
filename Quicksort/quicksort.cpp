#include "quicksort.h"

Quicksort::Quicksort() {
    size = 0;
    str = new char;
    *str = '\0';
}

Quicksort::Quicksort(const char* str) {
    size = strlen(str);
    this->str = new char[size];
    strcpy(this->str,str);
}

Quicksort::~Quicksort() {
    delete[] str;
}

void Quicksort::swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int Quicksort::partition(int left, int right) {
    char pivot = str[(left+right)/2];

    while(left<=right) {
        while(str[left]<pivot) {
            left++;
        }

        while(str[right]>pivot) {
            right--;
        }

        if(left<=right) {
            swap(str[left],str[right]);
            left++;
            right--;
        }
    }

    return left;
}

void Quicksort::quick( int left, int right) {
    int split = partition(left,right);

    if(left < split-1) {
        quick(left,split-1);
    }

    if(split < right) {
        quick(split,right);
    }
}

const char* Quicksort::quickSort() {
    quick(0,size-1);
    return str;
}

const char* Quicksort::quickSort(const char* str) {
    size = strlen(str);
    this->str = new char[size];
    strcpy(this->str,str);

    quick(0,size-1);
    return this->str;
}

