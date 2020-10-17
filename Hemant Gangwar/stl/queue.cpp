#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<char> q;
	q.push('s');
	q.push('t');
	q.push('1');

	cout<<q.front()<<endl;

    q.pop();

	cout<<q.front()<<endl;

	cout<<q.back();

	return 0;
}