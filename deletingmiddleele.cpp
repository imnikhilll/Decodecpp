
#include <iostream> 
using namespace std; 


struct Node { 
	int data; 
	struct Node* next; 
}; 
int countOfNodes(struct Node* head) 
{ 
	int count = 0; 
	while (head != NULL) { 
		head = head->next; 
		count++; 
	} 
	return count; 
} 


struct Node* deleteMid(struct Node* head) 
{ 
	
	if (head == NULL) 
		return NULL; 
	if (head->next == NULL) { 
		delete head; 
		return NULL; 
	} 
	struct Node* copyHead = head; 
	// Find the count of nodes 
	int count = countOfNodes(head); 
	// Find the middle node 
	int mid = count / 2; 
	// Delete the middle node 
	while (mid-- > 1) 
		head = head->next; 
	// Delete the middle node 
	head->next = head->next->next; 
	return copyHead; 
} 


void printList(struct Node* ptr) 
{ 
	while (ptr != NULL) { 
		cout << ptr->data << "->"; 
		ptr = ptr->next; 
	} 
	cout << "NULL\n"; 
} 


Node* newNode(int data) 
{ 
	struct Node* temp = new Node; 
	temp->data = data; 
	temp->next = NULL; 
	return temp; 
} 

int main() 
{ 
	/* Start with the empty list */
	struct Node* head = newNode(1); 
	head->next = newNode(2); 
	head->next->next = newNode(3); 
	head->next->next->next = newNode(4); 

	cout << "Given Linked List\n"; 
	printList(head); 
	head = deleteMid(head); 
	cout << "Linked List after deletion of middle\n"; 
	printList(head); 
	return 0; 
} 

// This code is contributed by Aditya Kumar (adityakumar129)
