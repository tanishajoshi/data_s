#include <iostream>
using namespace std;



// Give C++ code fragment for reversing an array
void revrseArray(int arr[], int start, int end) {
		while (start <end) {
				int tmp = arr[start];
				arr[start] = arr[end];
				start ++;
				end--;
		}
}

void printArr(int arr[], int size) {
		for (int i = 0; i <size; i++) 
			cout <<arr[i]<<" ";
			cout <<endl;

}

int main() {
	int arr[] = [2,3,4,5,6,7]
	int i = sizeof(arr)/sizeof(arr[0]);
	printArr(arr,n);
	revrseArray(arr,0,n-1);
	cout << "reversed array: " << endl;
	printArr(arr,n);
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
