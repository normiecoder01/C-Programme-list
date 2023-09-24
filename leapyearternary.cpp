#include <iostream>
using namespace std;

int main()
{
   int year;
   cout<<"enter year  "<<endl;
   cin>>year;
   (year%100==0)
        ?(year%400==0)
            ?cout<<year<<"is leap year"
            :cout<<"is not a leap year."
        :(year%4==0)
            ?cout<<"is a leap year."
            :cout<<"is not a leap year.";
}

