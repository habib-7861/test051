#include <iostream>
using namespace std;
float cost(string city,string product,int quantity)
{
    float cost;
    if(product == "coffee" && city == "Sofia")
    {
        float pay = quantity*0.50; 
        cost = pay;
    }
    else if(product == "coffee" && city == "Plovdiv")
    {
        float pay = quantity*0.40; 
        cost = pay;
    }
    else if(product == "coffee" && city == "Varna")
    {
        float pay = quantity*0.45; 
        cost = pay;
    }
    else if(product == "water" && city == "Sofia")
    {
        float pay = quantity*0.80; 
        cost = pay;
    }
    else if(product == "water" && city == "Plovdiv")
    {
        float pay = quantity*0.70; 
        cost = pay;
    }
    else if(product == "water" && city == "Varna")
    {
        float pay = quantity*0.70; 
        cost = pay;
    }

    else if(product == "beer" && city == "Sofia")
    {
        float pay = quantity*1.20; 
        cost = pay;
    }
    else if(product == "beer" && city == "Plovdiv")
    {
        float pay = quantity*1.15; 
        cost = pay;
    }
    else if(product == "beer" && city == "Varna")
    {
        float pay = quantity*1.10; 
        cost = pay;
    }
    else if(product == "sweets" && city == "Sofia")
    {
        float pay = quantity*1.45; 
        cost = pay;
    }
    else if(product == "sweets" && city == "Plovdiv")
    {
        float pay = quantity*1.30; 
        cost = pay;
    }
    else if(product == "sweets" && city == "Varna")
    {
        float pay = quantity*1.35; 
        cost = pay;
    }
    else if(product == "peanuts" && city == "Sofia")
    {
        float pay = quantity*1.60; 
        cost = pay;
    }
    else if(product == "peanuts" && city == "Plovdiv")
    {
        float pay = quantity*1.50; 
        cost = pay;
    }
    else if(product == "peanuts" && city == "Varna")
    {
        float pay = quantity*1.55; 
        cost = pay;
    }
    return cost;
}

main()
{
    system("cls");
    string product, city;float quantity;
    while(true)
    {
    cout<<"Enter prodect: ";
    cin >>product;
    cout<<"Enter City: ";
    cin >>city;
    cout<<"Enter quantity: ";
    cin >>quantity;
    float result = cost(city,product,quantity);
    cout <<"The cost is: "<<result<<endl;
    }
}