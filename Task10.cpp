#include <iostream>
using namespace std;
string congrates(string name, int Reg_no);
main()
{
    system("cls");
    string name;int Reg_no;string result;
    while(true)
    {
        cout <<"Enter name: ";
        cin >>name;
        cout <<"Enter Registration number: ";
        cin >>Reg_no;
        result = congrates(name,Reg_no);
        cout <<result<<endl;
    }
}
string congrates(string name, int Reg_no)
{
    string cong;
    if(name == "Ali" && Reg_no == 501)
    {
    cong = "congratulations Ali!";
    }
    else 
    {
        cong = "incorrect information.";
    }
    return cong;
}