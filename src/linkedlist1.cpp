#include <iostream>
using namespace std;


struct Node {
public:
	int data;
	Node *next;
	
};

class LinkedList {

private: 
		node *head, *tail;
public:
		LinkedList() {
			head = NULL;
			tail = NULL;
		}
};



void appendNode(Node node)::LinkedList {
		if (head = NULL) {
				head = node;
				tail = node;
				node->next = NULL
				
		} else {
				tail = node;
				tail->next = NULL;
				
		}
}

void insert(Node newnode, Node prevnode)::LinkedList {
		temp = prevnode -> next;
		prevnode->next = newnode;
		newnode->next = temp;

}

void delete(Node node)::LinkedList {
		Node tmp = head;
		Node prev = NULL;
		while (tmp != NULL) {
			if (node->data = tmp->data) {
				if (prev == NULL) {
					head = nead->next; 
					return;
				} else {
					if (tmp -> next == NULL) {
							tail = prev;
					}
					prev ->next = tmp-> next;
				}
			} else {
				prev = tmp;
				tmp = tmp->next; 
				}
		}
}

void size 

