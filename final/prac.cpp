#include<bits/stdc++.h>
using namespace std;

class Restaurent
{
    public:
        int id;
        float price;
        string item;
        int quantity;
};

bool CompareByPrice(Restaurent a, Restaurent b)
{
    // return a.price > b.price;
    if(a.price > b.price)
    {
        return true;
    }
    return false;

    // if(a.item == b.item)
    // {
    //     return a.price > b.price;
    // }
    // return a.item > b.item;

    // return a.price * a.quantity > b.price * b.quantity;
}

int main()
{
    int n;
    cin >> n;
    Restaurent obj[n];
    for(int i = 0; i < n; i++)
    {
        obj[i].id = i;
        cin >> obj[i].price;
        getchar();
        getline(cin, obj[i].item);
        cin >> obj[i].quantity;

    }
    sort(obj, obj + n, CompareByPrice);
    cout << "ITEM ID\t"
         << "ITEM NAME\t"
         << "ITEM PRICE\t"
         << "ITEM QUANTITY" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << obj[i].id << "\t" << obj[i].item << "\t\t" << obj[i].price << "\t\t" 
        << obj[i].quantity << "\t\t" << endl;
    }

    return 0;
}