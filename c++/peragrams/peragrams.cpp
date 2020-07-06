#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    char n[1000];
    cin >> n;
    int size = strlen(n);
    sort(n, n + size);

    map<char, int> numLetter;
    for (int i = 0; i < size; i++)
    {
        if (numLetter.count(n[i]) > 0)
        {
            numLetter[n[i]]++;
        }
        else
        {
            numLetter[n[i]] = 1;
        }
    }
    int toomany = 0;
    for (auto const &x : numLetter)
    {
        if (x.second % 2 != 0)
        {
            toomany++;
        }
    }
    if (size - toomany == 0)
    {
        toomany--;
    }
    else
    {
        if ((size - toomany) % 2 == 0)
        {
            if(toomany>0)
                toomany--;
        }
    }
    cout << toomany;
    return 0;
}