#include<bits/stdc++.h>
using namespace std;
class Medicine
{
    public:
        char name[100];
        int quantity;
        int price;
    

        Medicine(char* n, int q,int p)
        {
            strcpy(name,n);
            quantity=q;
            price=p;
        }
};
Medicine fun()
{
    char name[100]="Napa Extra";
    Medicine r(name, 4, 1200);
    return r;
}
int main()
{
    Medicine order1=fun();

    cout<<order1.name<<endl;
    cout<<order1.quantity<<endl;
    cout<<order1.price<<endl;

    return 0;
}