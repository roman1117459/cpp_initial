#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    cin >> x;

    int ar[x];

    for(int i=0; i<x; i++)
    {
        cin >> ar[i];
    }

    for(int i=0; i<x-1; i++)
    {
        for(int j= i+1; j<x; j++)
        {
            if(ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
    }

    for(int i=0; i<x; i++)
    {
        cout << ar[i] << " ";
    }


    return 0;
}