#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s = "Hemant Gangwar SPido" ;

	//getline(cin,s);
	//s.push_back('L');

	cout << s << endl;

	//s.pop_back();
	//s.pop_back();
	//cout << s <<endl;

	cout << "size : "<< s.size() <<endl;
	cout << "capacity : " << s.capacity() << endl;

	//s.shrink_to_fit() ;
	//cout << "capacity after shriking : " << s.capacity() <<endl ;

	/* other functions
	1.begin()
	2.end()
	3.rbegin()
	4.rend() */

	//manipulation operations
	//str.copy(char arr,len,pos)
	char ch[6];
	s.copy(ch,6,0);
	for(auto i : ch)
		cout << i ;
	cout << endl ;

	//swap
	string str1 = "string1" ;
	string str2 = "string2" ;
	str1.swap(str2);
	cout << "string1 = " << str1 << ", string2 = " << str2 <<endl ;
	

}