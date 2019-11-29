
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int c; 
	cin >> c;
	unsigned int reverse = 0;
	while (c > 0) {
		reverse <<= 1;
		if ((c & 1) == 1) {
			reverse ^= 1;
		}
		c >>= 1;
	 }
	cout << reverse;
}
