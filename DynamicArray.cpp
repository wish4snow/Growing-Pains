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

			cout << temp[i] << endl;
	}
	
	delete [] array;
	top++;

	return temp;
}

void DynamicArray::append_element (int element) {
	array = resize();
	array[top-1] = element;
	// cout << "balls: " << element << endl;
}
int DynamicArray::get_element_at_index (int index) {
	return array[index];
}
void DynamicArray::reset () {

}
int DynamicArray::size (){
	return top + 1;
}


