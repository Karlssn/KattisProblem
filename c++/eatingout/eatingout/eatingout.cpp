
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, a, b, c;
	cin >> m >> a >> b >> c;

	if ((m*2) >= a + b + c) {
		cout << "possible";
	}
	else {
		cout << "impossible";
	}
}

// Om 2 best�ller 1 f�rem�l och 2 best�ller ett annat �r det okej, dem f�r �verlappa

// 3 2 1 2 �r t.ex possible

//  