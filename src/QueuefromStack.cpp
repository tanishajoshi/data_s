// a queue can be implemented using stack.

using namespace std;
#include <iostream>
#include <stack>

/*
void enQueue(q,x):
while stack1 is not empty, push everything from stack1 to stack2
push x to stack 1 (assuming size of stacks is unlimited) 
push everything back to stack1

here time complexity will be O(n)

deQueue(q)
if stack1 is empty then error
pop an item from stack1 and return it

here time complexity will be O(1)

*/
class Queue {
		stack<int> s1, s2;

void enQueue(q,x) {
	while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
	}	
	s1.push(x)
	
	while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
	}
	
}

int deQueue(q) {
	if (s1.empty()) {
		cout <<"stack is empty"<< endl;
		exit(0);
	}

}



};
