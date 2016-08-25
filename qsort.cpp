#include <iostream>
#include <cstdlib>
#include <vector>

using std::cout;
using std::vector;

int compare(const void* a, const void* b) {
	return (*(int*)a-*(int*)b);
}

int main() {

	vector<int> vec;
	vector<int>::iterator it;

	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(0);
	vec.push_back(2);

	qsort(&vec[0], vec.size(), sizeof(int), compare);

	for(it = vec.begin(); it != vec.end(); it++) {
		cout << *it << ' ';
	}

	return 0;
}
