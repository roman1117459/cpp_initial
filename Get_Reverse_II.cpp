#include<bits/stdc++.h>
using namespace std;

class Students
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};

// bool CompareByID(Restaurent a, Restaurent b)
// {
//     // return a.price > b.price;
//     if(a.id > b.id)
//     {
//         return true;
//     }
//     return false;

//     // if(a.item == b.item)
//     // {
//     //     return a.price > b.price;
//     // }
//     // return a.item > b.item;

//     // return a.price * a.quantity > b.price * b.quantity;
// }

int main()
{
    int n;
    cin >> n;
    Students obj[n];
    for(int i = 0; i < n; i++)
    {
        // cin >> obj[i].price;
        // getchar();
        // getline(cin, obj[i].item);
        
        // cin >> obj[i].quantity;
        // cin >> obj[i].id;

        cin >> obj[i].nm >> obj[i].cls >> obj[i].s >> obj[i].id;

    }
    
    // for(int i = 0; i < n/2; i++)
    // {
    //     swap(obj[i].id, obj[n - 1].id);
    // }
    
    int i=0, j = n-1;

    while(i<j)
    {
        int tmp = obj[i].id;
        obj[i].id = obj[j].id;
        obj[j].id = tmp;
        i++;
        j--;
    }


    for(int i = 0; i < n; i++)
    {
        cout << obj[i].nm << " " << obj[i].cls << " " 
        << obj[i].s << " " << obj[i].id << endl;
    }

    return 0;
}