#include<iostream>
using namespace std;
void  swap(int*,int*);
int main ()
{
    int var1=10;
    int var2=20;
    cout<<var1<<var2<<endl;
    swap(&var1,&var2);
}
void swap(int*p1,int*p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<*p1;
    cout<<*p2;

}