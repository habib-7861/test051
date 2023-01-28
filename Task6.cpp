#include <iostream>
using namespace std;
string checkSpeed(float speed)
{
    string checks;
    if(speed <=10)
    {
        checks = "Slow";
    }
    if(speed >10 && speed <=50)
    {
        checks = "Average";
    }
    if(speed >50 && speed <=150)
    {
        checks = "fast";
    }
    if(speed >150 && speed <=1000)
    {
        checks = "ultra-fast";
    }
    if(speed >1000)
    {
        checks = "extremely fast";
    }
    return checks;
}
main()
{
    system("cls");
    while(true)
    {
        float speed;
        cout <<"Enter speed: ";
        cin >>speed;
        string result = checkSpeed(speed);
        cout <<result<<endl;
    }
}
