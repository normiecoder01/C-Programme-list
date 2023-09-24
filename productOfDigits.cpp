#include <iostream>
using namespace std;
int main()
{
	int num,product=1;
	cout<<"Enter any digit";
	cin>>num;
	while(num>0)
	{
	product=product*(num%10);
	num=num/10;
	}
	cout<<product;
return 0;
}
