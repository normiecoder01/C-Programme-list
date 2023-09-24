#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	do
	{
		cout<<"Enter a positive digit ."<<endl;
		cin>>num1;
		cout<<"Enter another positive digit greater than the previous one ."<<endl;
		cin>>num2;
	}while(num1<=0 || num2<num1);

	while(num1<=num2)
	{
	int count =0;
		if(num1==2)
		{
			cout<<2<<'\t';
		}
		else
		{
			int temp=2;
			for ( ; temp<num1/2; temp++)
			{
				if(num1%temp==0)
				{
					count++;
				}

			}
			if(count<=0)
			{
				cout<<num1<<'\t';
			}
			
		}
		num1++;
	}

return 0;
}
