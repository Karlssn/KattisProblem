#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char n[100];
    cin >> n;
    int scale = strlen(n) / 3;
    int correct = 0;
    for (int i = 0; i < scale; i++)
    {
        char letter0 = n[i];
        char letter1 = n[i + scale];
        char letter2 = n[i + 2 * scale];

        if (letter0 != letter1)
        {
            cout << letter2;
            continue;
        }
        cout << letter0;
    }
    return 0;
}