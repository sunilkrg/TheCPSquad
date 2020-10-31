#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//Declaration
struct node {
	int data;
	struct node *next; //indicates that pointer next points at the same structure
};
typedef struct node NODE;

void print(NODE* n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main() {
	NODE* first = NULL;
	NODE* second = NULL;
	NODE* third = NULL;

	//memory allocation using new
	first = new NODE;
	second = new NODE;
	third = new NODE;

	first->data = 10;
	first->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;

	print(first); //printing data

	//free memory
	delete first;
	delete second;
	delete third;
	return 0;
}