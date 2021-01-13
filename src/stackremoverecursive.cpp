#include <iostream> 
#include <stack>
using std::stack;
using namespace std;

void printStack(stack <int> *myStack) {
	cout << "The stack is : " << endl;
        while(!(*myStack).empty()) {
                cout << '\t' <<(*myStack).top();
                (*myStack).pop();
        }
        cout << '\n';
}
void clearStack(stack <int> *myStack) {
	if((*myStack).empty()) {
		printStack(myStack);
		return;
	}
	(*myStack).pop();
	clearStack(myStack);

}


int main () {
	stack <int> myStack;
	myStack.push(10);
	myStack.push(30);
	myStack.push(20);
	myStack.push(5);
	myStack.push(1);
	cout << "The stack is : "; 
	
	printStack(&myStack);
	clearStack(&myStack);
	printStack(&myStack);
	return 0;
}

