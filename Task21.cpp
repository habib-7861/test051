#include <iostream>
using namespace std;
float volleyball(string year,int holidays,int home);
main()
{
    system("cls");
    float result;
    string year;int holidays,home;
    cout <<"Enter year normal or leap: ";
    cin >>year;
    cout <<"Enter holidays: ";
    cin >>holidays;
    cout <<"Enter weekends: ";
    cin >>home;
    result = volleyball(year,holidays,home);
    cout <<result;
}
float volleyball(string year,int holidays,int home)
{
    float play;
    if(year == "normal")
    {
        float a =holidays - holidays*(2/3);
        float b = home+48+48*(3/4);
        float c = a+b;
        play = c;
    }
    else if(year == "leap")
    {
        float a =holidays - holidays*(2/3);
        float b = home+48+48*(3/4);
        float c = (a+b)+(a+b)*0.15;
        play = c;
    }
    return play;
}