#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    getline(cin, s);

    stringstream ss(s);
    string wrd;
    string x = "Ratul";

    int flag; 

    while(ss >> wrd)
    {
        if(wrd == x)
        {
            flag = 1;
            break;
        }
        else 
        {
            flag = 0;
        }
    }

    if(flag > 0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }


    return 0;
}