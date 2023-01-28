#include <iostream>
using namespace std;
string isEven(int number);
main()
{
    system("cls");
    while(true)
    {
        int number;
        cout <<"Enter number: ";
        cin>>number;
        string result = isEven(number);
        cout <<"The number is: "<<result<<endl;
    }
}
string isEven(int number)
{
    string Even_odd;
    if(number%2==0)
    {
        Even_odd = "Even.";
    }
    else if(number%2==1)
    {
        Even_odd = "Odd.";
    }
    return Even_odd;
}