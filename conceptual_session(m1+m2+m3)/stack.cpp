#include<bits/stdc++.h>
using namespace std;


void func2()
{
    int z=12;
    cout << "Hi from func 2\n";

}

void func1()
{
    int z=13;

    func2();
    cout << "Hi from func 1\n";
}

int main()
{
    int z=1;

    func1();
    cout << "Hi from main\n";
    
    return 0;
}