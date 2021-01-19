#include <iostream>
using namespace std;

int main() {
	// Give C++ code fragment for reducing an array

	int arr_length = 15
	for (int i = 0; i < (arr_length / 2); i++) {
			int tmpArray= array[i];
			array[i] = array[(arr_length - 1) - i];
			array[(arr_length - 1) - i] = tmpArray;
	}

	//Give a C++ Code fragment for randomly permuting an array. 

	char ch_Array[13];
		cin >> ch_Array;
	int len = strlen(ch_Array);
	sort(ch_Array, ch_Array+len);
	do {
		cout << ch_Array <<endl;
	
	}
	return 0;
}
