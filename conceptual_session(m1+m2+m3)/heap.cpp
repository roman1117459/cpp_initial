#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=15;
    int a[5] = {1,4,32,2,1}; //stact created

    int *arr = new int[5]{10, 12, 14, 15, 16};

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
    cout << "After delete \n";
    arr = NULL;
    cout << arr;
    // for(int i=0; i<5; i++)
    // {
    //     cout << arr[i] << endl;

    // }

    return 0;
}