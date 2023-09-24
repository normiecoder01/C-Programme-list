#include <iostream>
using namespace std;
int fSmallest(int[],int n);
int main()
{
int array[5]={50,20,30,10,530};

int secsmallest=fSmallest(array,5);
cout<<"Second smallest element is "<<secsmallest<<endl;
}
int fSmallest(int arr[],int n){
int small=arr[0];
int secsmall=0;
for(int i=1;i<n;i++){
 if(small>arr[i]){
   secsmall=small;
   small=arr[i];
 }

}
return secsmall;
}