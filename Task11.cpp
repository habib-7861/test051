#include <iostream>
using namespace std;
string Brand(string brand,int price);
main()
{
    system("cls");
    string brand;int price;
    while(true)
    {
        cout <<"Enter brand: ";
        cin >>brand;
        cout <<"Enter price: ";
        cin >>price;
        string result = Brand(brand,price);
        cout <<result<<endl;
    }
}
string Brand(string brand,int price)
{
    string buy;
    if(price <1500)
    {
        if(brand == "MTJ")
        {
            buy = "you can buy that brand.";
        }
    }
    return buy;
}