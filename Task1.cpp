#include <iostream>
using namespace std;
int Grade(int marks);
main()
{
    system("cls");
    int marks;
    while(true)
    {
        cout <<"Enter marks: ";
        cin>>marks;
        char result = Grade(marks);
        cout <<result<<endl; 
    }
}
int Grade(int marks)
{
    char grades;
    if(marks < 50)
    {
        grades = 'F'; 
    }
   else if(marks >= 50 && marks <= 60 )
    {
        grades = 'E'; 
    }
   else if(marks > 60 && marks <= 70 )
    {
        grades = 'D'; 
    }
   else if(marks > 70 && marks <= 80 )
    {
        grades = 'C'; 
    }
   else if(marks > 80 && marks <= 85 )
    {
        grades = 'B'; 
    }
    else if(marks > 85 && marks <=100)
    {
        grades = 'A'; 
    }
    return grades;

}