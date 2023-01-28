#include <iostream>
using namespace std;
float totalIncome(string screen,int rows,int columns)
{
    float incomes;
    if(screen == "Premiere")
    {
        float income = rows*columns*12.00;
        incomes = income;
    }
    else if(screen == "Normal")
    {
        float income = rows*columns*7.50;
        incomes = income;
    }
    else if(screen == "Discount")
    {
        float income = rows*columns*5.00;
        incomes = income;
    }
    return incomes;
}
main()
{
    system("cls");
    while(true)
    {
        string screen;int rows,columns;
        cout <<"Enter Screen type: ";
        cin >>screen;
        cout <<"Enter Rows: ";
        cin >>rows;
        cout <<"Enter Columns: ";
        cin >>columns;
        float result = totalIncome(screen,rows,columns);
        cout <<"The resul is: "<<result<<endl;
    }
}