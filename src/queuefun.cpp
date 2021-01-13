#include <queue>
#include <iostream>
using namespace std;
using std::queue;
//push in STL  = enqueue at rear
//pop in STL = dequeue at front
/*
*/
void printQ(queue<float> *myque) {
	while(!(*myque).empty()) {
		cout <<(*myque).front() << " ";
		(*myque).pop();
	}
	cout << endl;
}

int main() {
	queue<float> myque;
	myque.push(1.2);
	myque.push(4.7);
	myque.push(3.6);
	myque.push(3.8);
	myque.push(5);
	
	myque.size();
	myque.front();
	myque.back();
	myque.pop();
	myque.size();
	myque.front();
	myque.back();
	printQ(&myque);
	printQ(&myque);

}
