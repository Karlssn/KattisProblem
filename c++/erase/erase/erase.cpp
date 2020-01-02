#include <iostream>
#include <string>
#include <bitset>         // std::bitset

using namespace std;
int main()
{
	int N;
	string a, b;
	cin >> N;
	cin >> a >> b;
	bitset<1000> org(a);
	bitset<1000> del(b);

	if (N % 2 == 0) {
		if (a == b) {
			cout << "Deletion succeeded";
		}
		else {
			cout << "Deletion failed";
		}
	}
	else {
		for (string::size_type i = 0; i < a.size(); ++i) {
			if (a[i] == b[i]) {
				cout << "Deletion failed";
				return 0;
			}
		}
		cout << "Deletion succeeded";
	}

}
