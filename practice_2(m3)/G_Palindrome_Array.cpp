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

    int i=0, j=x-1;
    int val=0;

    while(i<j)
    {
        // if(ar[i]!=ar[j])
        // {
        //     val=1;
        // }

        if(ar[i]==ar[j])
        {
            val=0;
        }
        else
        {
            val=1;
        }
        i++;
        j--;

    }

    if(val<=0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



    return 0;
}