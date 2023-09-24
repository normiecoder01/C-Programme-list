#include<iostream>
using namespace std;
int main(){
    double netsal,grosssal,hra,da,pf,bassal;
    cin>>bassal;
    hra=(bassal/100)*15;
    da=(bassal/100)*30;
    grosssal=bassal+da+hra;
    pf=(grosssal/100)*10.5;
    cout<< (netsal=grosssal-pf);

}