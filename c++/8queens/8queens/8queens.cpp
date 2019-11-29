// 8queens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

struct xyz {
	int x;
	int y;
};

#include <bits/stdc++.h>
using namespace std;
int main()
{
	list<xyz> queenspos;
	list<xyz> nopos;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			char temp;
			cin >> temp;
			if (temp == '*') {
				if (!queenspos.empty()) {
					for (auto const& k : nopos) {
						if (k.x == j && k.y == i) {
							cout << "invalid";
							return 0;
						}
					}
				}
				xyz pos;
				pos.x = j;
				pos.y = i;
				queenspos.push_back(pos);
				xyz left = pos;

				for (int ind = 0; ind < 8; ind++)
				{
					nopos.push_back(xyz{ ind,pos.y });
					nopos.push_back(xyz{ pos.x,ind });
				}
				while (left.x >= 0 && left.y < 8) {
					left.x--;
					left.y++;
					nopos.push_back(left);

				}
				xyz right = pos;
				while (right.x < 8 && right.y < 8) {
					right.x++;
					right.y++;
					nopos.push_back(right);
				}
			}
		}
	}
	if (queenspos.size() == 8) {
		cout << "valid";
	}
	else {
		cout << "invalid";
	}
	
	return 0;
}


// [1[1] ([2][2])	[3][3]

// ([1][1])   [2][2]