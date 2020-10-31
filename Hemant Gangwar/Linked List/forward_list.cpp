#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pf push_front
#define pof pop_front
#define ef emplace_front

int main() {

	forward_list<int>l1; //declaring forward list or singly linked list
	forward_list<int>l2;
	forward_list<int>::iterator ptr;    // Declaring a forward list iterator
	l1.assign({1, 2, 3, 4, 5}); //assigning multiple values
	l2.assign(5, 10); // assigning 5 values with data 10

	l1.pf(7);
	l1.ef(6);
	l2.pf(5);

	for (int&a : l1)
		cout << a << "->";
	cout << endl;

	for (int&a : l2)
		cout << a << "->";
	cout << endl;

	l1.insert_after(l1.begin(), {11, 12, 13});
	l2.insert_after(l2.begin(), 20);

	for (int&a : l1)
		cout << a << "->";
	cout << endl;

	for (int&a : l2)
		cout << a << "->";
	cout << endl;

	l1.erase_after(l1.begin());
	l2.erase_after(l2.begin());

	for (int&a : l1)
		cout << a << "->";
	cout << endl;

	for (int&a : l2)
		cout << a << "->";
	cout << endl;

	l1.remove(5);
	l2.remove(10);

	for (int&a : l1)
		cout << a << "->";
	cout << endl;

	for (int&a : l2)
		cout << a << "->";
	cout << endl;
	return 0;
}
