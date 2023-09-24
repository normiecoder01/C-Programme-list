#include <iostream>
using namespace std;
int main()
{
int num,num1;
num1=num;
int rev=0;
cin>>num;
rev=num%10;
// Reverse
if(num>=10){
while(num>=10)
{
num=num/10;
rev=rev*10 +num%10;
}}
//Output of reverse in words
while(rev>0){
int num2  = rev%10;
rev = rev/10;
switch(num2)
{
case 1:
cout<<"One ";
break;
case 2:
cout<<"Two ";
break;
case 3:
cout<<"Three ";
break;
case 4:
cout<<"Four ";
break;
case 5:
cout<<"Five ";
break;
case 6:
cout<<"Six ";
break;
case 7:
cout<<"Seven ";
break;
case 8:
cout<<"Eight ";
break;
case 9:
cout<<"Nine ";
break;
case 0:
cout<<"Zero ";
}
}
}



