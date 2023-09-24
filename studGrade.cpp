#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
   
    int nOfStud;
   
    cout << "Enter the number of students in class." << endl;
    cin >> nOfStud;
    string name[nOfStud];
    float score1[nOfStud];
    float score2[nOfStud];
    float score3[nOfStud];
    float avg[nOfStud];
    char grade[nOfStud];

    
    for (int i = 0; i < nOfStud; i++)
    {
        cout << "Enter the name of student number " << i+1 << "." << endl;
        cin.getline(name[], nOfStud);

        
        cout << "Enter the grades in assign. no 1 of student number " << i+1 << "." << endl;
        cin >> score1[i];
        cout << "Enter the grades in assign. no 2 of student number " << i+1 << "." << endl;
        cin >> score2[i];
        cout << "Enter the grades in assign. no 3 of student number  " << i+1 << "." << endl;
        cin >> score3[i];
    
    
        avg[i]=(score1[i]+score2[i]+score3[i])/3;

        if(avg[i]>=90 && avg[i]<=100)
        grade[i] ='A';
        if(avg[i]>=80 && avg[i]<=89)
        grade[i] ='B';
        if(avg[i]>=70 && avg[i]<=79)
        grade[i] ='C';
        if(avg[i]>=60 && avg[i]<=69)
        grade[i] ='D';
        if(avg[i]<60)
        grade[i] ='E';
    }

     for (int i = 0; i <nOfStud; i++)
     {
        cout<<"Here are the details of student number "<<i+1<<"."<<endl;
        cout<<"Name: "<<name[i];
        cout<<"  Score in assign.1: "<<score1[i]<<endl;
        cout<<"  Score in assign. 2: "<<score2[i]<<endl;
        cout<<"  Score in assign. 3: "<<score3[i]<<endl;
        cout<<"  Avg Score: "<<avg[i]<<endl;
        cout<<"  Grade: " <<grade[i]<<endl;



     }
}
