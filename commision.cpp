#include <iostream>
using namespace std;

int main()
{
    double sal,sales,comm,netsal;
    cout<<"Enter the salary of employee <space> the sales he scored.";
    cin>>sal>>sales;
    if(sales>=5000 && sales<=7500)
        comm=((sales/100)*3);
    else if(sales>=7501 && sales<=10500)
        comm=((sales/100)*8);
    else if(sales>=10501 && sales<=15000)
        comm=((sales/100)*11);   
    else
        comm=((sales/100)*15);  
    netsal = sal + comm;
    cout<<"Commision of the employee would be "<<comm<<" and the net salary would be "<<netsal;
}

