#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    
    cin >> x;

    (x>='A' && x<='Z') ? cout << "ALPHA" << endl << cout << "IS CAPITAL";
    (x>='a' && x<='z') ? cout << "ALPHA" << endl << cout << "IS SMALL" << endl;
    (x>='0' && x<='10') ? cout << "IS DIGIT" << endl;





    return 0;
}