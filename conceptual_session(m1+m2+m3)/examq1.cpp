#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        
        char name[20];
        float height;
        int age;
        


        Person(float h, int a, char *n_nm)
        {
            strcpy(name, n_nm);
            height=h;
            age=a;
            
        }
};

int main()
{

    Person *per1= new Person(170.5, 25, "Embappe");
    Person *per2= new Person(175.5, 23, "Haaland");
    
    // cout << (*per1).age << endl;
    // cout << (*per2).age << endl;

    if((*per1).age > (*per2).age)
    {
        cout << (*per1).age << endl;
    }
    else
    {
        cout << (*per2).age << endl;
    }


    return 0;
}