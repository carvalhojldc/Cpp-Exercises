#include <iostream>
#include "quicksort.h"
using namespace std;

int main() {
    Quicksort qs1("zAdcndke1ab");
    Quicksort qs2;

    cout << "qs1: " << qs1.quickSort() << endl;
    cout << "qs2: " << qs2.quickSort("98cjlks2aAdP2w!a") << endl;

    return 0;
}
