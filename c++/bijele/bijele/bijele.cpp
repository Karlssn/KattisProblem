
#include <iostream>
using namespace std;
int main()
{
	int b[6] = { 1, 1, 2, 2, 2, 8 };
	int a[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
		cout << (b[i] - a[i]) << " ";
	}

}

