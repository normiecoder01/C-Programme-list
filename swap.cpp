#include <iostream>
using namespace std;

int main()
{
    int a=100,b=200;
    cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    int temp;
    temp=a; a=b; b=temp;
    cout<<"after swappping"<<endl;
    cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    a=a+b; b=a-b; a=a-b;
    cout<<"after swappping again."<<endl;
    cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    

}