#include <iostream>
using namespace std;
bool greaterNumber(int,int,int);
main()
{
    system("cls");
    while(true)
    {
        int num1,num2,num3;
        cout <<"Enter number1: ";
        cin >>num1;
        cout <<"Enter number2: ";
        cin >>num2;
        cout <<"Enter number3: ";
        cin >>num3;
        bool result = greaterNumber(num1,num2,num3);
        if(result == true)
        {
            cout <<"yes"<<endl;
        }
        else
        {
            cout <<"No"<<endl;
        }  
    }
}
bool greaterNumber(int num1,int num2,int num3)
{
    
    if(num1 == num2 == num3)
    {
        return true;
    }
    else
    {
        return false;
    }  
}