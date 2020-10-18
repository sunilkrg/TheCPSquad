#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair <int, int> p {1, 3}; //single pair
	cout << p.first << " " << p.second << endl;

	pair <int , pair <int, char>> np {1, {2, 'c'}}; //mixed pair
	cout << np.first << " " << np.second.first << "," << np.second.second << endl;

	pair <pair<int, int>, pair<string, string>> np1 {{1, 2}, {"Hemant", "Aditya"}}; //nested pair
	cout << np1.first.first << " " << np1.second.first << endl;
	return 0;
}