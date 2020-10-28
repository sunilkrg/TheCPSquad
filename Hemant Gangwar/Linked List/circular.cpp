#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class NODE {
public:
	int data;
	NODE *next;
	NODE(int d) {
		data = d;
		next = NULL;
	}
};

void insert(NODE *&head, int d) {
	NODE *temp = head;
	NODE *n = new NODE(d);
	n->next = head;
	if (temp != NULL) {
		while (temp->next != head) {
			temp = temp->next;
		}
		temp->next = n;
	}
	else {
		n->next = n; //first element self loop
	}
	head = n;
}

NODE* take_input(NODE *&head) {
	int d;
	cin >> d;
	while (d != -1) {
		insert(head, d);
		cin >> d;
	}
	return head;
}

void print(NODE *head) {
	NODE *temp = head;
	while (temp->next != head) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
}

ostream& operator<<(ostream &os, NODE *head) {
	print(head);
	return os;
}

istream& operator>>(istream &is, NODE *&head) {
	head = take_input(head);
	return is;
}

int main() {
	NODE *head = NULL;
	cin >> head;
	cout << head;
	return 0;
}
