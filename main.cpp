#include <iostream>
#include "DynamicArray.hpp"
#include <cassert>

using namespace std;


int main () {
	
	cout << "starting appending and size" << endl;

	DynamicArray array;
	assert(array.size() == 0);
	array.append_element(10);
	assert(array.size() == 1);
	array.append_element(166);
	assert(array.size() == 2);
	array.append_element(1696);
	assert(array.size() == 3);
	array.append_element(156);
	assert(array.size() == 4);
	array.append_element(15);
	assert(array.size() == 5);
	array.append_element(2234);
	assert(array.size() == 6);

	cout << "size and append done\n" << endl;

	cout << "starting get element" << endl;
 
	assert(array.get_element_at_index(0) == 10);
	assert(array.get_element_at_index(1) == 166);
	assert(array.get_element_at_index(2) == 1696);
	assert(array.get_element_at_index(4) == 15);
	assert(array.get_element_at_index(array.size() - 1) == 2234);
	assert(array.get_element_at_index(-1) == 0);
	assert(array.get_element_at_index(7) == 0);

	cout << "get element done\n" << endl;

	cout << "reset elements starting" << endl;

	array.reset();

	assert(array.get_element_at_index(0) == 0);
	assert(array.get_element_at_index(1) == 0);
	assert(array.get_element_at_index(5) == 0);
	assert(array.get_element_at_index(76) == 0);
	assert(array.get_element_at_index(-1) == 0);

	cout << "reset elements done\n" << endl;

	cout << "testing completed" << endl;
	

	return 0;
}