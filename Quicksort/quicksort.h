#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <cstring>

class Quicksort {
protected:
    int size;
    char* str;

    void swap(char& a, char& b);

    int partition(int left, int right);

    void quick( int left, int right);

public:
    Quicksort();

    Quicksort(const char* str);

    ~Quicksort();

    const char* quickSort();

    const char* quickSort(const char* str);
};

#endif // QUICKSORT_H
