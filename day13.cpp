/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    
    int arr[n];
    cout<<"ener the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<""<<endl;
    }
    return 0;
}
    */

/*
   #include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number of elements:";
    cin>>n;
    
    int arr[n];
    cout<<"ener the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float average=(float)sum/n;
    cout<<"sum of elements="<<sum<<endl;
    cout<<"average of elements="<<average<<endl;
    return 0;
}
    */



/*
    #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    
    int arr[n];
    cout<<"ener the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       int largest=arr[0];
       int smallest=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
          largest=arr[i];

        if(arr[i]<smallest)
           smallest=arr[i];
    }
    cout<<"largest element="<<largest<<endl;
    cout<<"smallest element="<<smallest<<endl;
    return 0;
}
    */



     #include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cout<<"enter the number of elements:";
    cin>>n;
    
    int arr[n];
    cout<<"ener the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
          even++;
        else
          odd++;
    }
      
    cout<<"number of even elements="<<even<<endl;
    cout<<"number of odd elelments="<<odd<<endl;
    return 0;
}