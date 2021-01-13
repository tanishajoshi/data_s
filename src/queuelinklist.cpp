//circularly linked list implrementation of queue

#include <iostream>
using namespace std;

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
