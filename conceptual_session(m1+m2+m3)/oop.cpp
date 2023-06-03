//This one is static
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
    Vehicle car("Car", 4, 'N');
    Vehicle motor("MotorCycle", 2, 'N');
    Vehicle bus("Bus", 30, 'Y');


    car.printdetails();
    motor.printdetails();
    bus.printdetails();



    return 0;
}