  /*
#include<iostream>
  using namespace std;
  int main (){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
          cout<<"";
        }
        for(int j=1;j<=i;j++)
        {
          cout<<j;
        }
        for(int j=1;j>=1;j--)
        {
            cout<<j;
        }   
        cout<<endl;
    }
    return 0;
}
*/


/*
#include<iostream>
  using namespace std;
  int main (){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
          cout<<"";
        }
        for(int j=0;j<i;j++)
        {
          cout<<char('A'+ j);
        }
        for(int j=i-2;j>=0;j--)
        {
            cout<<char('A'+ j);
        }   
        cout<<endl;
    }
    return 0;
}
    */


/*
    #include<iostream>
  using namespace std;
  int main (){
    int n=5;
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<n-i;j++)
        {
          cout<<"";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
          cout<<"*";
        }
       
        cout<<endl;
    }
    return 0;
}
    */




  #include<iostream>
  using namespace std;
  int main (){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
          cout<<"";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
          cout<<"*";
        }
       
        cout<<endl;
    }
    return 0;
}