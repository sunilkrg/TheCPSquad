#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> a; //{}
	a.push_back(2); //{2}
	a.emplace_back(3); //{2,3}
	cout << "vector a: " << a[0] << " " << a[1] << endl;

	//a.back() last element
	//a.first() first element

	vector<pair<int, int>> vec;

	vec.push_back({1, 2});

	cout << "vector pair : " << vec[0].first << "," << vec[0].second << endl;

	vector<int> v(5); // {0,0,0,0,0}
	vector<int> v1(5, 100); //{100,100,100,100,100}
	vector<int> v2(v1);

	// vector<int>:: iterator it = v2.begin();

	cout << "vector v2 : ";
	for (auto it = v2.begin(); it != v2.end(); it++)
	{
		cout << *(it) << " ";
	}

	//v2.pop_back();
	//v2.size();


	cout << endl;
	v2.insert(v2.begin(), 6, 5);

	cout << "vector v2 after insert : ";
	for (auto it = v2.begin(); it != v2.end(); it++)
	{
		cout << *(it) << " ";
	}

	v2.erase(v2.begin(), v2.begin() + 1); //last index not included
	cout << endl;
	cout << "vector v2 after erase : ";
	for (auto it = v2.begin(); it != v2.end(); it++)
	{
		cout << *(it) << " ";
	}

	cout << endl;

	v2.clear();
	cout << v2.empty();

	return 0;
}