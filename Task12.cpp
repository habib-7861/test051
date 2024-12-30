#include <iostream>
using namespace std;
string going(char Class,char go);
main()
{
    char Class,go;
    cout <<"If you have class today press Y!.";
    cin >>Class;
    cout <<"if your friends go to university press Y!.";
    cin >>go;
    string result = going(Class,go);
    cout <<result;
}
string going(char Class,char go)
{
    string gone;
    if(Class == 'Y')
    {
        if(go == 'Y')
        {
            gone = "you will go to the university.";
        }
    }
    return gone;
}