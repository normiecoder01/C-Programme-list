#include <iostream>
using namespace std;
string cpystr(string input,string output);
string output;
int main()
{
    string input;
    string output;
    
    cin>>input;
    cin>>output;
    
  cout<<cpystr(input, output)<<endl;
  cout<<output;
    
}

string cpystr(string input,string output)
{
    output = input;
    return output;
}
