//https://docs.google.com/document/d/1XqQJpOwL5t-qZLkAh696hb0lM9CXIdZBpu4lA4IeyT4/edit#
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int *A = new int[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    int m;
    cin >> m;
    
    int *B = new int[m];

    for(int i=0; i<m; i++)
    {
        B[i] = A[i];
    }

    for(int i=n; i<m; i++)
    {
        cin >> B[i];
    }

    delete[] A;


    // for(int i=0; i<m+n; i++)
    // {
    //     B[i]=A[i];
    // }

    // for(int i=m; i<m+n; i++)
    // {
    //     cin>>B[i];
    // }
    

    for(int i=0; i<m; i++)
    {
        cout << B[i] << " ";
    }



    return 0;
}