#include <iostream>
using namespace std;
int isGreater(int num1,int num2);
main()
{
    system("cls");
    while(true)
    {
        int num1,num2;
        cout <<"Enter number1: ";
        cin >>num1;
        cout <<"Enter number2: ";
        cin >>num2;
        int result = isGreater(num1,num2);
        cout <<result<<" is greater number."<<endl;
    }
}
int isGreater(int num1,int num2)
{
    int Greater;
    if(num1>num2)
    {
        Greater = num1;
    }
    else if(num2>num1)
    {
        Greater = num2;
    }
    return Greater;
}