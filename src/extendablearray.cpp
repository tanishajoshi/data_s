//a vector can be implemented using an extendable array in dCPP.


/* 
steps to perform this
let's provide means to grow the array A storing elems. of vector v.
array A capacity is fixed at some number N (no. elements)

when overflow occurs when n = N and function insert is called
we perform the folllowing steps:

1. allocate a new array B of capacity N
2. copy A[i] to B[i], for i= 0,,,N
3. Deallocate A and reassign A to point to the new array B
*/

#include <iostream>
using namespace std;
using std::vector;

int main () {
		std::vector<int> v;
		std::cout << "vector size = " << v.size() << endl;
		v[0] = 1;
		v[1]= 2; 
		v[2]=3;
		v[3]=4;
		v[4] =5;
		std::cout << "the second elem is: "<< v.at(1) << endl;
		for (int i=1; i<v.size(); i++) {
				std::cout << "the " << i <<"th element is: "<<v.at(i)<<endl; 
		}
		return 0;

		while (!v.size() = 0) {
				v.pop_back()
		} 
}

