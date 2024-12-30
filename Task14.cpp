#include <iostream>
using namespace std;
string results(int number);
main()
{
    system("cls");
    int number;
    while(true)
    {
        cout <<"Enter number: ";
        cin >>number;
        string result = results(number);
        cout <<result<<endl;
    }
}
string results(int number)
{
    string pass;
    if(number > 50)
    {
        pass = "you have passed.";
    }
    else if(number <50)
    {
        pass = "you have failed.";
    }
    return pass;
}