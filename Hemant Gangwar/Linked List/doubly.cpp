#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class NODE
{
public:
	int data;
	NODE *next;
	NODE *prev;
	//constructor
	NODE(int d) {
		data = d;
		next = NULL;
	}
};

void insert(NODE *&head, int d) {

}

void print(NODE *head) {

}

int main() {
	NODE *head = NULL;
	insert(head, 10);
	insert(head, 20);
	insert(head, 30);
	insert(head, 40);
	insert(head, 50);
	print(head);

	return 0;
}
