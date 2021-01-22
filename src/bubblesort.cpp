#include <iostream>
using namespace std;
#include <array>
/*
In the first pass, once the largest element is reached,it keeps on being swapped 
until it gets to the last position of the sequence.
In the second pass, once the second largest element is reached, it keeps on being 
swapped until it gets to the second-to-last position of the sequence.
In general,at the end of the ith pass,the right-most i elements of the sequence 
(that is, those at indices from n − 1 down to n − i) are in final position.

number of passes made by bubble sort is limited to no. elements 'n'
the ith pass can be limited to the first n-i+1 elements

for eg. for a sequence of 5 elemts, the 3rd pass is ltd to the first 3 elems.



time complexity O(n^2)

*/


void bubblesort(int *s[]) {

int len = sizeof(*s)/sizeof(s[0]);
for (int i = 0; i<len; i++) {
	for(int j =1; j<len-i;j++) {	
		int prev = s[j-1];
		int next = s[j];
		if(prev > next) {
			int tmp = prev;
			prev = next; 
			next = tmp;
		}
	}

}



}

int main () {
int s[] = {16,3,77,40,5,11};
bubblesort(&s);
for (int i = 0;i<6;i++) {
cout <<s[i]<<", ";
} 


}
