#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	

	cout<<"Enter a positive digit ."<<endl;
	cin>>num;
		
	

	while(num>0)
	{
	sum=sum+(num%10);
	num=num/10;
	}
	cout<<sum;
	

return 0;
}
