#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    getline(cin, s);
    stringstream ss(s);
    string wrd;
    int cnt = 0;
    while(ss >> wrd)
    {
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}