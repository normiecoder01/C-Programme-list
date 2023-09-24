#include <iostream>
using namespace std;
int fLargest (int[],int n);
int main()
{
int array[5]={10,20,30,50,530};
 int largest;
largest=fLargest(array,5);
cout<<"largest element is "<<largest<<endl;
}
int fLargest(int *arr,int n){
int lar=arr[0];
for(int i=1;i<n;i++){
 if(lar<arr[i]){
   lar =arr[i];
 }
}
return lar;
}