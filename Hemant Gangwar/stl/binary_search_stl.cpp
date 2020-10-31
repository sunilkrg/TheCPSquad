#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = {1, 2, 5, 8, 3, 6, 7, 12, 11, 54, 32};
	int size, x;
	size = sizeof(a) / sizeof(a[0]);
	sort(a, a + size);

	for (int i : a)
		cout << " " << i;

	cout << endl;

	cout << "enter x :";
	cin >> x;
	if (bool find = binary_search(a, a + size, x))
		cout << "Number is in array";
	else
		cout << "Number is not in array";

}