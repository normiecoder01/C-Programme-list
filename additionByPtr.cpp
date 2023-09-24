#include<iostream>
using namespace std;
int *sum(int,int);
int main()
{
    int var1=10;
    int var2=20;
    
   int *ans=sum(var1,var2);
   cout<<*ans;
}
int *sum(int var1,int var2){
    int sum=var1+var2;
    return &sum;
}


