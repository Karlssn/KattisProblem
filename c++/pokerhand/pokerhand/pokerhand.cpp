
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string a = "A23456789TJQK";
	map<char, int> m;
	string arr[5];
	for (int i = 0; i < 5; i++)
	{
		string temp;
		cin >> temp;
		m[temp.at(0)] += 1;
	}
	int max = 0;
	for (const auto &p : m)
	{
		if (p.second > max)
			max = p.second;
	}
	cout << max;
}

