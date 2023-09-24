#include <iostream>
using namespace std;

int main()
{
    int input,count=0;
    cout<<"Enter a number."<<endl;
    cin>>input;
    if(input==2)
    cout<<"number is prime."<<endl;
     
    for (int i=2;i<=input/2;i++)
    {   
        if(input%i==0)
        break;
        else
        count+=1;
    }
    if(count==(input/2)-1)
    cout<<"number is prime."<<endl;
    else
    cout<< "Number is not prime."<<endl;
}
