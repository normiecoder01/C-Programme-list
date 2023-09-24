#include <iostream>
using namespace std;
 int main()
 {
    int var1=10;
    int &rvar1=var1;
    cout<<&var1<<'\t';
    cout<<&rvar1<<'\t';

    int var2=10;
    int *pvar2 =&var2;
    cout<<&var2<<'\t';
    cout<<&pvar2<<'\t';
}