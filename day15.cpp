/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
{
    if (arr[i]!=0)
{
    arr[j]=arr[i];
    j++;
}
}
while(j<n)
{
    arr[j]=0;
    j++;
}
cout<<"array after moving zeroes to the end: ";
for(int i=0;i<n;i++)
cout<<arr[i]<<"";
}
  */



/*
  #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(int i=n-1;i>0;i--)
{
    arr[i]=arr[i-1];
}
    arr[0]=last;
cout<<"array after right rotation: ";
for(int i=0;i<n;i++)
cout<<arr[i]<<""<<endl;
}
   */


/*
    #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first=arr[0];
    for(int i=0;i<n;i++)
{
    arr[i]=arr[i+1];
}
    arr[n-1]=first;
cout<<"array after left rotation: ";
for(int i=0;i<n;i++)
cout<<arr[i]<<""<<endl;
}
*/





 #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
{
   cout<<arr[i]<<"";
}
return 0;
}