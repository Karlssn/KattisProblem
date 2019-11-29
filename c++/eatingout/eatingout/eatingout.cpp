
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

// Om 2 beställer 1 föremål och 2 beställer ett annat är det okej, dem får överlappa

// 3 2 1 2 är t.ex possible

//  