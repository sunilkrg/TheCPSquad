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

void insertAtTail(NODE *&head, int d) {
	if (head == NULL) {
		head = new NODE(d);
		return;
	}
	NODE *tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = new NODE(d);
	return;
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

//insert in middle
void insertInMiddle(NODE *&head, int d, int p) {
	//corner cases
	if (head == NULL or p == 0)
		insertAtHead(head, d);
	else if (p > length(head))
		insertAtTail(head, d);
	//base case
	else {
		//take p-1 jumps
		int jump = 1;
		NODE *temp = head;
		while (jump <= p - 1) {
			temp = temp->next;
			jump++;
		}
		NODE *n = new NODE(d);
		n->next = temp->next;
		temp->next = n;
	}
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
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	print(head);
	insertInMiddle(head, 15, 1);
	insertAtTail(head, 35);
	print(head);
	return 0;
}