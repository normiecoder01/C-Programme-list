#include <iostream>
using namespace std;

int main()
{  
   char a,b,c;
   cout<<"Enter any three characters."<<endl;
   cin>>a>>b>>c;
   char arr[3] = {a,b,c};
   for(int i =0; i<=2;i++)
   {
      arr[i]=a;
      for(int j=0;j<=2;j++)
      {
         if(arr[j]==a)
         continue;
         else
         arr[j]=b;
      }
      

   }
}
