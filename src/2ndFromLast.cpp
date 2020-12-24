#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

//Function to find the 2nd to last node of LL
int findPenultimate(struct Node* head) {
	struct Node* temp = head;
	//if list is empty or has <2 nodes
	if (tmp == NULL || tmp->next == NULL)
		return -1;
	while (tmp != NULL) {
		//Check if curr node is 2nd to last or not
		if (tmp->next->next==NULL)
			return tmp->data;
		tmp = tmp->next;
	}
}
//fx to push node at head
void addNode(struct Node** head_ref, int new_data) {
	Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

int main() {
	struct Node* head = NULL;
	addNode(&head,12);
	addNode(&head,29);
	addNode(&head,11);
	addNode(&head, 23);
	addNode(&head,8);
	cout << findPenultimate(head);
	return 0;
}
