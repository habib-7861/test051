#include <iostream>
using namespace std;
float budgets(float budget,string catagory,int people);
float money;
main()
{
    system("cls");
    while(true)
    {
        float budget;string catagory;int people;
        cout <<"Enter budget: ";
        cin >>budget;
        cout <<"Enter catagory: ";
        cin >>catagory;
        cout <<"Enter number of people: ";
        cin >>people;
        float result = budgets(budget,catagory,people);
        if ( money < budget)
        {
            cout <<"Yes! you have "<<result<<" QR left."<<endl;
        }
        else if( budget > money)
        {
            cout <<"Not enough money! you need "<<result<<" QR."<<endl;
        }
    }
    return 0;
}
float budgets(float budget,string catagory,int people)
{

    if(catagory == "vip" && people <=4)
    {
        float trans = budget*0.75;
        float perc = budget - trans;
        float p_ticket = people*499.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
    else if(catagory == "normal" && people <=4)
    {
        float trans = budget*0.75;
        float perc = budget - trans;
        float p_ticket = people*249.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
    else if(catagory == "vip" && people>=5 && people <=9)
    {
        float trans = budget*0.60;
        float perc = budget - trans;
        float p_ticket = people*499.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
    else if(catagory == "normal" && people>=5 && people <=9)
    {
        float trans = budget*0.60;
        float perc = budget - trans;
        float p_ticket = people*249.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
        if(catagory == "vip" && people>=10 && people <=24)
    {
        float trans = budget*0.50;
        float perc = budget - trans;
        float p_ticket = people*499.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
    else if(catagory == "normal" && people>=10 && people <=24)
    {
        float trans = budget*0.50;
        float perc = budget - trans;
        float p_ticket = people*249.99;
        float left_enough = perc - p_ticket;
        money = left_enough;
    }
        if(catagory == "vip" && people>=25 && people <=49)
    {
        float trans = budget*0.40;
        float perc = budget - trans;
        float p_ticket = people*499.99;
        float left_enough = p_ticket - perc;
        money = left_enough;
    }
    else if(catagory == "normal" && people>=25 && people <=49)
    {
        float trans = budget*0.40;
        float perc = budget - trans;
        float p_ticket = people*249.99;
        float left_enough = p_ticket - perc;
        money = left_enough;
    }
        if(catagory == "vip" && people >=50)
    {
        float trans = budget*0.25;
        float perc = budget - trans;
        float p_ticket = people*499.99;
        float left_enough = p_ticket - perc;
        money = left_enough;
    }
    else if(catagory == "normal" && people >=50)
    {
        float trans = budget*0.25;
        float perc = budget - trans;
        float p_ticket = people*249.99;
        float left_enough = p_ticket - perc; 
        money = left_enough;
    }
    return money;
}