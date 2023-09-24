#include <iostream>
using namespace std;
bool findEle(int * array,int n=5);
int main()
{  
    int n;
    cin>>n;
    int array[] = {35,25,52,33,50};
    bool val = findEle(array,n);
    cout<<val;
    
return 0;
}
bool findEle(int * array,int n)
{
    for (int i=0;i<5;i++)
    {
        if(n==array[i])
        {
            return true;
        }
    }
    return false;
}