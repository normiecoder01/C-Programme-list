#include<iostream>
using namespace std;
int main(){
cout<<"Enter the number of student....:";
int n;
cin>>n;
string name[n];
int input[n][3];
for(int i = 0; i < n; i++){
cout<<"Enter the name of "<<i+1<<"student"<<endl;
cin>>name[i];
for(int j = 0; j < 3; j++){
cout<<"Enter the marks of sub #"<<j+1<<" :";
cin>>input[i][j];
}
}

double avg[n];
for(int i = 0; i < n; i++){
int sum =0;
for(int j = 0; j < 3; j++){
 sum += input[i][j];
}
avg[i] =sum/3;
}

for (int i=0;i<n;i++)
{
cout<<"Average  marks of student #" << i+1<<'\t'<<avg[i]<<endl;
}
return 0;
}
