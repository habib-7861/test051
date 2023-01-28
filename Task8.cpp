#include <iostream>
using namespace std;
float rent(string time,float kmeters);
main()
{
    system("cls");
    float result;
    string time;float kmeters;
    while(true)
    {
        cout <<"Enter time: ";
        cin >>time;
        cout <<"Enter kilometers: ";
        cin >>kmeters;
        result = rent(time,kmeters);
        cout <<result<<endl;
    }
}

float rent(string time,float kmeters)
{
    float fare;
    if(time == "day" && kmeters <20)
    {
        float pay = (kmeters*0.79)+0.70;
        fare = pay;
    }
    else if(time == "night" && kmeters <20)
    {
        float pay = (kmeters*0.90)+0.70;
        fare = pay;
    }
    else if((time == "day" || time == "night") && (kmeters >=20 && kmeters <100))                      //Bus
    {
        float pay = (kmeters*0.09);
        fare = pay;
    }
    else if((time == "day" || time == "night") && kmeters >=100 )                                        //Train
    {
        float pay = (kmeters*0.06);
        fare = pay;
    }
    return fare;
}