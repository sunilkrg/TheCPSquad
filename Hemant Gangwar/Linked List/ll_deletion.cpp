#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class NODE
{
public:
	int data;
	NODE *next;
	//constructor
	NODE(int d) {
		data = d;
		next = NULL;
	}
};

//calculate length
int length(NODE *n) {
	int cnt = 0;
	while (n != NULL)
	{
		cnt++;
		n = n->next;
	}
	return cnt;
}

//insert at head
void insertAtHead(NODE *&head, int d) {
	if (head == NULL) {
		head = new NODE(d);
		return;
	}
	NODE *n = new NODE(d);
	n->next = head;
	head = n;
}

void deleteHead(NODE *&head) {
	if (head == NULL)
		return;
	NODE *temp = head->next;
	delete head;
	head = temp;
}

void deleteTail(NODE *&head) {
	if (head == NULL)
		return;
	if (head->next == NULL)
		delete head;
	NODE *prev = head;
	while (prev->next->next != NULL)
		prev = prev->next;
	// Delete last node
	delete (prev->next);
	// Change next of second last
	prev->next = NULL;
}

//delete middle element using tortise hare approach
void deleteMiddle(NODE *&head) {
	// Base cases
	if (head == NULL)
		return;

	// Initialize slow and fast pointers to reach middle of linked list
	NODE *slow_ptr = head;
	NODE *fast_ptr = head;

	// Find the middle and previous of middle to store previous of slow_ptr
	NODE *prev;
	while (fast_ptr != NULL && fast_ptr->next != NULL) {
		fast_ptr = fast_ptr->next->next;
		prev = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	// Delete the middle node
	prev->next = slow_ptr->next;
	delete slow_ptr;
}

//print elements
void print(NODE *n) {
	while (n != NULL) {
		cout << n->data << "->";
		n = n->next;
	}
	cout << endl;
}
int main() {
	NODE *head = NULL;
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	print(head);
	deleteHead(head);
	print(head);
	deleteTail(head);
	print(head);
	deleteMiddle(head);
	print(head);
	return 0;
}