#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        string s;
        string x;

        cin >> s >> x;

        while(s.find(x)!=-1)
        {
            int len;
            s.replace(s.find(x), x.length(), "$");
        }

        cout << s << endl;
    }
    
    // for(int i=0; i < n; i++)
    // {        
    //     cin >> s >> x;
    // }

    // // while(s.find(x)!=-1)
    // // {
    // //     s.replace(s.find(x), 3, "$");
    // // }
    
    // // cout << s << endl;

    // for(int i = 0; i < n; i++)
    // {
    //     // int fnd;
    //     // if(fnd=s.find(x))
    //     // {
    //     //     s.replace(fnd, 1, "$");
            
    //     // }
    //     // cout << s << endl;
    //     // while(s.find(x)!=-1)
    //     // {
    //     //     s.replace(s.find(x), 1, "$");
    //     // }
    //     cout << s << endl;
    // }
    
    return 0;
}