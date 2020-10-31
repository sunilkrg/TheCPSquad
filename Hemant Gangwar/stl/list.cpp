#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> ls;
	ls.push_front(1);
	ls.push_back(2);
	ls.push_front(3);
	ls.push_back(4);

	for(auto i:ls)
		cout<<i<<" ";
	cout<<endl;

	for(auto i=ls.rbegin();i!=ls.rend();i++)
		cout<<*(i)<<" ";
	return 0;
}