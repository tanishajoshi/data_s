#include <iostream>
using namespace std; 

void switch(int *i, int *j) {
	int tmp = *i;
	*i= *j;
	*j = tmp;
}

void selection_sort(int arr[], int n) {

	int a,b,min;
	for (a= 0; a<n; a++) {
		min =a;
		for(b = a+1; b<n; b++) 
		if (arr[b] < arr[min] )
			min = b;
		switch(&arr[min] , &arr[a]);
	}

}

int main() {
	int arr[] = {64,25,12,22,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr, n);
	cout << "Sorted array: '\n';
	return 0; 
	

}
