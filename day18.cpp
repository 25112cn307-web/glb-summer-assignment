
/*
#include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
 }
        for(int i=0;i<n-1;i++)
        {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   cout<<"sorted array:";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"";
   }
   return 0;
}
   */


/*

   #include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
 }
        for(int i=0;i<n-1;i++)
        {
            int minlndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minlndex])
            {
                minlndex=j;
            }
        }
                int temp=arr[i];
                arr[i]=arr[minlndex];
                arr[minlndex]=temp;
            }
   cout<<"sorted array:";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"";
   }
   return 0;
}
   */



/*
    #include <iostream>
using namespace std;
 int main(){
    int n,key;
    cout<<"enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter the sorted array of elements:";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
 }
     cout<<"enter the elements to search:";
     cin>>key;
     int low=0,high=n-1,mid;
     bool found=false;

     while(low<=high)
     {
        mid=(low=high)/2;
        if(arr[mid]==key)
        {
            cout<<"element found at position"<<mid+1;
            found=true;
            break;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     if(found){
        cout<<"element not found:";
     }
     return 0;
    }
*/







 #include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
 }
        for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   cout<<"array in descending order:";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"";
   }
   return 0;
}
   