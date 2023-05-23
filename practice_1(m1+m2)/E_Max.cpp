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

    int mx_val = INT_MIN;

    for(int i=0; i<x; i++)
    {
        mx_val= max(ar[i], mx_val);
    }

    cout << mx_val;







    return 0;
}