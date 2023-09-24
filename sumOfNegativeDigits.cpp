#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter any digit";
	cin>>num;
	if(num<0)
	{
		num*=-1;
	}
	while(num>0)
	{
	sum=sum+(num%10);
	num=num/10;
	}
	cout<<sum;
return 0;
}
