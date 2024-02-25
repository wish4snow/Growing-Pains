#include <iostream>
#include "DynamicArray.hpp"

using namespace std;


DynamicArray::DynamicArray() {
	top = 0;
	array = new int;
}

int* DynamicArray::resize (){
	int* temp = new int[size() + 1];

	for (int i = 0; i < top; i++) {
		temp[i] = array[i];

		// cout << temp[i] << endl;
	}
	
	delete [] array;
	top++;

	return temp;
}

void DynamicArray::append_element (int element) {
	array = resize();
	array[top-1] = element;
}
int DynamicArray::get_element_at_index (int index) {
	if (index >= 0 && index <= top && top != 0) {
		return array[index];	
	}

	cout << "Out of range" << endl;
	return 0;

	
}
void DynamicArray::reset () {
	top = 0;
}

int DynamicArray::size (){
	return top;
}


