#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int duck;
    cin >> duck;

    for (int i = 0; i < duck; i++)
    {
        int number;
        cin >> number;
        cout << "\n" <<number;
        if(number%2==0){
            cout << " is even";
        }else{
            cout << " is odd";
        }
    }

    return 0;
}