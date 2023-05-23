#include<bits/stdc++.h>
using namespace std;

int* get_array()
{

    int n;
    cin >> n;

    // int arr[n];

    int *arr= new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{

    int *arr = get_array();

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}