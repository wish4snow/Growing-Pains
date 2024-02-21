class DynamicArray {
	private:
		int top;
		int *array;
		int* resize();

	public:
		DynamicArray ();
		void append_element (int element);
		int get_element_at_index (int index);
		void reset ();
		int size ();

};