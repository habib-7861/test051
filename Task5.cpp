#include <iostream>
using namespace std;
string checkTitle(float age,char gender)
{
    string title;
    if(age >=16 && gender == 'M')
    {
        title = "Mr";
    }
    else if(age <16 && gender == 'M')
    {
        title = "Master";
    }
    else if(age >=16 && gender == 'f')
    {
        title = "Ms.";
    }
    else if(age <16 && gender == 'f')
    {
        title = "Miss";
    }
    return title;
}
main()
{
    system("cls");
    while(true)
    {
        float age;
        char gender;
        string result;
        cout <<"Enter age: ";
        cin >>age;
        cout <<"Enter gender: ";
        cin >>gender;
        result = checkTitle(age,gender);
        cout <<result<<endl;
    }
}