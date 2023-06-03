#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello";
    s="gelo";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.clear();

    cout << s.empty() << endl;
    s.resize(15);


    return 0;
}