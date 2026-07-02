#include<iostream>
#include<string>
using namespace std;
  int main()
{
  const  int SIZE=5;

  int rollno[SIZE];
  string name[SIZE];
  float marks[SIZE];

  cout<<"Enter details of"<<SIZE<<"students:\n";

  for(int i=0;i<SIZE;i++)
  {
    cout<<"\nstudents"<<i+1<<endl;

    cout<<"enter roll number:";
    cin>>rollno[i];


    cin.ignore();
    cout<<"enter name:";
    getline(cin,name[i]);

    cout<<"enter marks:";
    cin>>marks[i];
  }

  cout<<"\n\n----student records----\n";
  cout<<"roll no\tname\t\tmarks\n";

  for(int i=0;i<SIZE;i++){
      
    cout<<rollno[i]<<"\t"<<name[i]<<"\t\t"<<marks[i]<<endl;
  }
  return 0;

    
  }
