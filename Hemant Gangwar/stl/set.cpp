#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	// empty set container
	set <int, greater <int> > s1;

	// insert elements in random order
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	s1.insert(50); // only one 50 will be added to the set
	s1.insert(10);

	// printing set s1
	set <int, greater <int> > :: iterator itr;
	cout << "\nThe set s1 is : ";
	for (itr = s1.begin(); itr != s1.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
	cout << endl;

	// assigning the elements from s1 to s2
	set <int> s2(s1.begin(), s1.end());

	// print all elements of the set s2
	cout << "\nThe set s2 after assign from s1 is : ";
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
	cout << endl;

	// remove all elements up to 30 in s2
	cout << "\ns2 after removal of elements less than 30 : ";
	s2.erase(s2.begin(), s2.find(30));
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}

	// remove element with value 50 in s2
	int num;
	num = s2.erase (50);
	cout << "\ns2.erase(50) : ";
	cout << num << " removed \t" ;
	for (itr = s2.begin(); itr != s2.end(); ++itr)
	{
		cout << '\t' << *itr;
	}
	cout << endl;

	return 0;

}
