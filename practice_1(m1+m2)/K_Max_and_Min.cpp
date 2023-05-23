#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    int mx = max(x, y);
    mx = max(mx, z);

    int mn = min(x, y);
    mn = min(mn, z);

    cout << mn << " " << mx; 

    return 0;
}