#include <iostream>
#include "DynamicArray.hpp"

using namespace std;


int main () {
	DynamicArray array;
	array.append_element(10);
	array.append_element(166);
	array.append_element(1696);
	array.append_element(156);
	array.append_element(15);
	array.append_element(2234);
	cout << array.size() << endl;
	cout << "adsf:" << array.get_element_at_index(0) << endl;
	cout << "adsf:" << array.get_element_at_index(1) << endl;
	cout << "adsf:" << array.get_element_at_index(2) << endl;
	cout << "adsf:" << array.get_element_at_index(3) << endl;
	return 0;
}