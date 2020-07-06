#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int max = n*(x+1);
    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        max -=temp;
    }
    cout << max;
}