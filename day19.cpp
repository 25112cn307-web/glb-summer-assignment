
/*
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows and column:";
    cin>>r>>c;
int a[10][10],b[10][10],sum[10][10];
cout<<"enter element of first matrix:\n";
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++){
    cin>>a[i][j];
 }
}
cout<<"enter elements of second matrix:\n";
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>b[i][j];
    }
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        sum[i][j]=a[i][j] + b[i][j];
    }
}
cout<<"sum of the matrices:\n";
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
    cout<<sum[i][j]<<"";
}  
cout<<endl;
}
return 0;
}
*/




#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows and column:";
    cin>>r>>c;
int a[10][10],b[10][10],transpose[10][10];
cout<<"enter matrix elements:\n";
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++){
    cin>>a[i][j];
 }
}
cout<<"enter elements of second matrix:\n";
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        transpose[j][i]=a[i][j];
    }
}
cout<<"transpose of the matrix:\n";
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
    cout<<transpose[i][j]<<"";
    }
    cout<<endl;
}

return 0;
}