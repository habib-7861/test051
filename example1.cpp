#include <iostream>
using namespace std;
main()
{
    string brand;
    int price;
    while(true)
    {
        cout <<"Enter brand: ";
        cin>>brand;
        cout <<"Enter price: ";
        cin>>price;
        if(brand == "MTJ" && price < 1500 )
        {
            cout <<"I will buy."<<endl;
        }
        else
        {
            cout <<"I will not buy."<<endl;
        }
    }
}