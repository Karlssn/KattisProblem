#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    char a[4];
    char b[4];
    cin >> a >> b;
    reverse(a, a + 3);
    reverse(b, b + 3);
    for (int i = 0; i < 3; i++)
    {
     
    }
    int a1,b1;
    sscanf(a, "%d", &a1);
    sscanf(b, "%d", &b1);
    
    if (a1 > b1)
    {
        cout << a1;
        return 0;
    }
    cout << b1;
    return 0;
}
