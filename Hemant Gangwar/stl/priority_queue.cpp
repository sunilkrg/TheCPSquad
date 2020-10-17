#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int> pq;
	pq.push(1);
	pq.push(12);
	pq.push(9);
	pq.push(22);

	cout << pq.top() << endl;

	pq.pop();

	cout << pq.top() << endl;

	//min heap
	priority_queue <int, vector<int>, greater<int>> min;
	min.push(8);
	min.push(7);
	min.push(1);
	min.push(15);

	cout << min.top() << endl;

	min.pop();

	cout << min.top() << endl;

	return 0;
}