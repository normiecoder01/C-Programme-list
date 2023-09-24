#include <iostream>
using namespace std;
int fLargest (int[],int n);
int main()
{
int array[5]={10,20,30,50,530};
 
int secLar=fLargest(array,5);
cout<<"Second largest element is "<<secLar<<endl;
}
int fLargest(int *arr,int n){
int lar=arr[0];
int secLar=0;

for(int i=1;i<n;i++){
 if(lar<arr[i]){
    secLar=lar;
   lar =arr[i];
 }
}
return secLar;
}