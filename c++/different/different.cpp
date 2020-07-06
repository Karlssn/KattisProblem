#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <sstream>
using namespace std;

int main()
{
    while (true)
    {
        string row;
        getline(cin, row);
        if(cin.eof()){
            return 0;
        }
        stringstream ss(row);
        long long int N, M;
        ss >> N >> M;
        long long int ans = abs(N - M);
        cout << ans << "\n";
    }
    return 0;
}