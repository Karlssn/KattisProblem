#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;



void swap(char n[], int i, int j)
{
    int temp = n[i];
    n[i] = n[j];
    n[j] = temp;
}
void sort(char n[], int index){
    for (int i = index; i < strlen(n); i++)
    {
     for (int j = i+1;j < strlen(n); j++){
         if(n[i]>n[j]){
             swap(n,i,j);
         }
     }
    }
}
int main()
{
    char n[999999];
    cin >> n;
    int size = strlen(n);
    
    if (size == 1)
    {
        cout << 0;
        return 0;
    }

    bool descending = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (n[i] < n[i + 1])
        {
            descending = false;
        }
    }
    if (descending)
    {
        cout << 0;
        return 0;
    }

    bool ascending = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (n[i] > n[i + 1])
        {
            ascending = false;
        }
    }
    if (ascending)
    {
        swap(n, size - 1, size - 2);
        cout << n;
        return 0;
    }

    int digit;
    int min = 100;
    int minindex = 0;
    for (int i = size - 1; i > 0; i--)
    {
        if (n[i] > n[i - 1])
        {
            digit = n[i - 1];
            for (int j = i; j < size; j++)
            {
                if (min > n[j] && n[j] > digit)
                {
                    min = n[j];
                    minindex = j;
                }
            }
            swap(n, i - 1, minindex);
            sort(n, i);
            cout << n;
            return 0;
        }
    }
    cout << 0;
    return 0;
}