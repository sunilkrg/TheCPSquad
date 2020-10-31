#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	// empty set container 
	multiset <int, greater <int> > s1;		 

	s1.insert(40); 
	s1.insert(30); 
	s1.insert(60); 
	s1.insert(20); 
	s1.insert(50); 
	s1.insert(50); 
	s1.insert(10); 

	// printing set s1 
	multiset <int, greater <int> > :: iterator itr; 
	cout << "\nThe set s1 is : "; 
	for (itr = s1.begin(); itr != s1.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 

	return 0; 

} 
