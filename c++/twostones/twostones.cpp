#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "Alice";
        return 0;
    }
    cout << "Bob";
    return 0;
}