#include <iostream>
using namespace std;
int fSmallest(int[],int n);
int main()
{
int array[5]={10,20,30,50,530};

int smallest=fSmallest(array,5);
cout<<"smallest element is "<<smallest<<endl;
}
int fSmallest(int *arr,int n){
int small=arr[0];
for(int i=1;i<n;i++){
 if(small>arr[i]){
   small=arr[i];
 }
}
return small;
}