//circularly linked list implrementation of queue

#include <iostream>
using namespace std;
/*
typedef string Elem;
class LinkedQueue{

	public: 
		LinkedQueue();
		int size() const;
		bool empty() const; 
		const Elem& front() const throw(QueueEmpty);
		void enqueue(const Elem& e); 
		void dequeue() throw(QueueEmpty); 

	private:
		CircleList C;
		int n;
};

*/

struct QNode {  // node object
	int data; //some data to be stored in node
	QNode* next;
	QNode(int d) {
		data= d;
		next = NULL;
	}
};

struct Queue {
	QNode *front, *rear;
	Queue() {
		front = rear = NULL;
	}
	void enQueue(int x) {
		//Create an LL Node
		QNode* temp = new QNode(x);

		//if que empty, then, new node is both front & rear
		if (rear == NULL) {
		   front = rear = temp;
		   return;
		}
		//Add new node at end of que & change rear
		rear -> next = temp; //temp = new arrival node 
		rear = temp; //set new rear
	}
	void deQueue() {
	    //if que empty, return null
	    if (front ==NULL) 
		return; 
		// Store prev front & move front one node ahead
		QNode* temp = front;
		front = front->next;
		//if front becomes NULL, then change rear also as NULL
		if (front == NULL) 
		   rear = NULL; 

		delete (temp);
	}

	
};
int main() {
	Queue q;
	q.enQueue(20);
	q.enQueue(10);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue front : " << (q.front)-> data << endl;
	cout << "Queue rear : " << (q.rear)->data;

}
