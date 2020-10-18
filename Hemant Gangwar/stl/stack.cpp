#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> st;
	st.push('s');
	st.push('t');
	st.push('1');

	cout<<st.top()<<endl;

	st.pop();

	cout<<st.top()<<endl;

	return 0;
}