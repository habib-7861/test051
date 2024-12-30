#include <iostream>
using namespace std;
int discount(string day,string month,float price)
{
    float discounts;
    if(day == "sunday" && (month == "october"|| month =="march" || month == "august"))
    {
        float disc = price - (price*0.10);
        discounts = disc;
    }
    else if(day == "monday" && (month == "november"|| month =="december"))
    {
        float disc = price - (price*0.05);
        discounts = disc;
    }
    else 
    {
        discounts = price;
    }
    return discounts;



}
main()
{
    system("cls");
    while(true)
    {
        string day,month;
        int price;
        float payable;
        cout <<"Enter day: ";
        cin>>day;
        cout <<"Enter month: ";
        cin>>month;
        cout <<"Enter price: ";
        cin>>price;
        float result = discount(day,month,price);
        cout <<result<<endl;
    }
}
