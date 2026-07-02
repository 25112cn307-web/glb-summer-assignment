/*
#include<iostream>
using namespace std;
struct employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    employee emp;
    cout<<"enter employee ID:";
    cin>>emp.id;
    cin.ignore();
    cout<<"enter employee name:";
    getline(cin,emp.name);
    
    cout<<"enter department:";
    getline(cin,emp.department);
    cout<<"enter salary:";
    cin>>emp.salary;

    cout<<"\n====EMPLOYEE DETAILS===="<<endl;
     cout<<"Employee ID:"<<emp.id<<endl;
      cout<<"Employee name:"<<emp.name<<endl;
       cout<<"department:"<<emp.department<<endl;
     cout<<"salary:"<<emp.salary<<endl;
     return 0;

}
     */









/**
     #include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
    float marks;
};

int main()
{
    int n;

    cout<<"enter number of  students:";
    cin>>n;
    
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter details of student "<<i+1<<endl;
    
    cout<<"roll number:";
    cin>>s[i].rollno;

    cin.ignore();
    cout<<"name:";
    getline(cin,s[i].name);

    cout<<"marks:";
    cin>>s[i].marks;
    }


    cout<<"\n\n====STUDENT RECORDS====\n"<<endl;
    for(int i=0;i<n;i++)
    {
     cout<<"\nstudent:"<<i+1<<endl;
      cout<<"roll number:"<<s[i].rollno<<endl;
       cout<<"name:"<<s[i].name<<endl;
     cout<<"marks:"<<s[i].marks<<endl;
     
    }
    return 0;

}

*/

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int empid;
    string empname;
    float basicsalary,hra,da,grosssalary,tax,netsalary;

    cout<<"enter employee ID:";
    cin>>empid;

    cin.ignore();
    cout<<"enter employee name:";
    getline(cin,empname);

    cout<<"enter basic salary:";
    cin>>basicsalary;

    hra=basicsalary*0.20;
    da=basicsalary*0.10;

    grosssalary=basicsalary+hra+da;

    if(grosssalary>50000)
    tax=grosssalary*0.10;
    else
    tax=0;

    netsalary=grosssalary-tax;
    cout<<fixed<<setprecision(2);
    cout<<"\n====SALARY SLIP====\n";
    cout<<"employee id:"<<empid<<endl;
    cout<<"employee name:"<<empname<<endl;
    cout<<"basic salary:"<<basicsalary<<endl;
    cout<<"HRA(20%):"<<hra<<endl;
    cout<<"DA(10%):"<<da<<endl;
    cout<<"gross salary:"<<grosssalary<<endl;
    cout<<"tax deduction:"<<tax<<endl;
    cout<<"net salary:"<<netsalary<<endl;

    return 0;


}
*/




#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    int rollno;
    float m1,m2,m3,m4,m5,total,percentage;
    cout<<"enter student name:";
    getline(cin,name);
    cout<<"enter roll number:";
    cin>>rollno;

    cout<<"enter marks of 5 subject:\n";
    cout<<"subject 1:";
    cin>>m1;
    cout<<"subject 2:";
    cin>>m2;
    cout<<"subject 3:";
    cin>>m3;
    cout<<"subject 4:";
    cin>>m4;
    cout<<"subject 5:";
    cin>>m5;
     
    total=m1+m2+m3+m4+m5;
    percentage=total/5;

    char grade;
    if(percentage>=90)
      grade='A';
    else if(percentage>=75)
      grade='B';
    else if(percentage>=60)
      grade='c';
    else if(percentage>=40)
      grade='D';
      else
      grade='F';
      
      cout<<"\n\n====MARKSHEEET====\n";
      cout<<"student name:"<<name<<endl;
      cout<<"roll number:"<<rollno<<endl;
      cout<<"----------------\n";
      cout<<"subject 1:"<<m1<<endl;
      cout<<"subject 2:"<<m2<<endl;
      cout<<"subject 3:"<<m3<<endl;
      cout<<"subject 4:"<<m4<<endl;
      cout<<"subject 5:"<<m5<<endl;
      cout<<"-----------------\n";
      cout<<"Total Marks:"<<total<<"/500"<<endl;
             cout<<"fixed"<<setprecision(2);
              cout<<"percentage:"<<percentage<<"%"<<endl;
               cout<<"grade:"<<grade<<endl;

        if(grade=='F')
        cout<<"result : fail"<<endl;
        else
        cout<<"result : pass"<<endl;
        return 0;
}       

      




