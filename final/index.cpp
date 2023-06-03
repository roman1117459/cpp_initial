#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin >> a;
    int cnt[26] = {0};

    for(int i=0; i<a; i++)
    {
        char ch;
        cin >> ch;
        cnt[ch - 'a']++;
    }

    for(int i=0; i < 26; i++)
    {
        while(cnt[i] != 0)
        {
            cout << char(i + 'a');
            cnt[i]--;
        }
        // if(cnt[i] > 0)
        // {
        //     cout << char(i + 'a');
        // }
    } 


    return 0;
}