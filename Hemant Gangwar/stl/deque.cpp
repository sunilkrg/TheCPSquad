#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> ls;
	ls.push_front(1);
	ls.push_back(2);
	ls.push_front(3);
	ls.push_back(4);

	for(auto i:ls)
		cout<<i<<" ";
	cout<<endl;

	ls.pop_back();
	ls.pop_front();

	for(auto i:ls)
		cout<<i<<" ";
	return 0;
}