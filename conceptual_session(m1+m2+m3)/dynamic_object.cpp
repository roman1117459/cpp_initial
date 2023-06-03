#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    public:
    char type[10];
    int seat;
    char helper;
    //nicher eta constructor
    Vehicle(char *v_type, int seat_num, char c)
    {
        strcpy(type, v_type);
        seat = seat_num;
        helper = c;
    }
    void printdetails()
    {   
        cout << type << " Details" << endl;
        cout << "Vehicle Name : " << type << endl;
        cout << "Total Seat : " << seat << endl;
        cout << "Is Helper Required : " << helper << endl;
        cout << "--------------------------" << endl;
        

    }


}; //framework , chach, model blueprint




int main()
{
    
    //OBJECT banaitasi 
    Vehicle car("Car", 4, 'N'); // stact a oobject create hoise
    Vehicle motor("MotorCycle", 2, 'N');
    Vehicle bus("Bus", 30, 'Y');

   
    car.printdetails();
    motor.printdetails();
    bus.printdetails();

    //dynamic vabe object toiri krbo
    int x = 10;
    int *b = &x;


    //type *variable_name = kake ref korbo sheta
    Vehicle *car2 = new Vehicle("Car2", 666, 'Z');
    cout << (*car2).helper << endl;
    cout << (*car2).type << endl;
    cout << car2 -> type << endl; //anther way of pointer
    delete car2;
    cout << (*car2).type << endl;

    return 0;
}