#include <iostream>

using namespace std;

int main()
{
	int num = 6; //110 return 2
	int ct = __builtin_popcount(num);
	cout << ct << endl;


	int num1 = 7; //111 return3
	int ct1 = __builtin_popcount(num1);
	cout << ct1 << endl;

	long long int a = 123456789123; //return 19
	int ct2 = __builtin_popcountll(a);
	cout << ct2 << endl;

	return 0;


}
