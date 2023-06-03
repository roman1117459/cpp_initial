#include<bits/stdc++.h>
using namespace std;

class Students
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};

bool CompareByMI(Students a, Students b)
{
    // return a.price > b.price;
    // if(a.price > b.price)
    // {
    //     return true;
    // }
    // return false;

    // if(a.item == b.item)
    // {
    //     return a.price > b.price;
    // }
    // return a.item > b.item;

    // return a.price * a.quantity > b.price * b.quantity;
    if (a.math_marks + a.eng_marks > b.math_marks + b.eng_marks)
    {
        return true;
    }
    else if(a.math_marks + a.eng_marks == b.math_marks + b.eng_marks)
    {
        return a.id < b.id;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Students obj[n];
    for(int i = 0; i < n; i++)
    {
        // obj[i].id = i;
        // cin >> obj[i].price;
        // getchar();
        // getline(cin, obj[i].item);
        // cin >> obj[i].quantity;
        cin >> obj[i].nm >> obj[i].cls >> obj[i].s >> obj[i].id >> obj[i].math_marks >> obj[i].eng_marks;

    }
    sort(obj, obj + n, CompareByMI);



    for(int i = 0; i < n; i++)
    {
        cout << obj[i].nm << " " << obj[i].cls << " " << obj[i].s << " " 
        << obj[i].id << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }

    return 0;
}