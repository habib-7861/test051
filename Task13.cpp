#include <iostream>
using namespace std;
int Greater(int num1,int num2,int num3);
main()
{
    system("cls");
    int num1,num2,num3;
    while(true)
    {
        cout <<"Enter number: ";
        cin >>num1;
        cout <<"Enter number: ";
        cin >>num2;
        cout <<"Enter number: ";
        cin >>num3;
        int result = Greater(num1,num2,num3);
        cout <<result<<" is the greater number."<<endl;
    }
    return 0;
}
int Greater(int num1,int num2,int num3)
{
    int greatest;
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            greatest =  num1;
        }
    }
    if(num2 > num1)
    {
        if(num2 > num3)
        {
            greatest = num2;
        }
    }
    if(num3 > num1)
    {
        if(num3 > num2)
        {
            greatest = num3;
        }
    }
    return greatest;
}