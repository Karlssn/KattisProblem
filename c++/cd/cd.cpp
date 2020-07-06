#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;

bool binarySearch(int A[], int size, int item)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = floor((left + right) / 2);
        if (A[mid] < item)
        {
            left = mid + 1;
        }
        else if (A[mid] > item)
        {
            right = mid - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}


int main(){
    
    while (true)
    {
        int N, M;
        cin >> N >> M;
        if (N == 0 && M == 0)
        {
            return 0;
        }
        int allCds[N];
        int overlap = 0;
        
        
        for (int i = 0; i < N; i++)
        {
            int cd;
            cin >> cd;
            allCds[i] = cd;
        }
        for (int i = 0; i < M; i++)
        {
            int cd;
            cin >> cd;
            if (binarySearch(allCds, N, cd))
            {
                overlap++;
            }
        }

        cout << overlap << "\n";
    }
    return 0;
}