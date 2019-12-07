// fizzbuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, n;
	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i%x == 0) {
			cout << "Fizz";
		}
		if (i%y == 0){
			cout << "Buzz";
		}
		if (i%y != 0 && i%x != 0)
			cout << i;
		cout << endl;
	}

}
