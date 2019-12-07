// inflation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	list<int> a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	a.sort();
	double lowest = 1;
	for (int i = 1; i <= n; i++)
	{
		double frac = double(a.front()) / double(i);
		if (frac > 1) {
			cout << "impossible";
			return 0;
		}

		a.pop_front();
		if (frac < lowest)
			lowest = frac;
	}
	cout << lowest;
}

// ballon sizes from 1=>n
// amount of helium is sum of int
// what is the minimum fraction a ballon can be filled.s
// 1=1, 2=2, 2=3, 3=4, 3=5, 6=6
// 2=1 which impossible
// 0=1 1=2 2=3 2=4 4=4 