#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    
    cin >> x;

    // (x>='A' && x<='Z') ? << cout << "IS CAPITAL";
    // (x>='a' && x<='z') ?  << cout << "IS SMALL" << endl;
    // (x>='0' && x<='10') ? cout << "IS DIGIT" << endl;

    if(x>='A' && x<='Z')
    {
         cout << "ALPHA" << endl;
         cout << "IS CAPITAL";
    }
    else if(x >= 'a' && x <='z') 
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }




    return 0;
}