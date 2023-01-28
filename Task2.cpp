#include <iostream>
using namespace std;
int discount(string day,string month,float price)
{
    float discounts;
    if(day == "Sunday" && month == "October")
    {
        float disc = price - (price*10/100);
        discounts = disc;
    }
    else if(day == "Sunday" && month != "October")
    {
        float disc = price - (price*5/100);
        discounts = disc;
    }
    else if(day != "Sunday" && month == "October")
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
