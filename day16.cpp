/**
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    int arr[n-1];
    cout<<"enter"<<n-1<<"elements:";
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    int total=n*(n+1)/2;
    int missing=total-sum;
    cout<<"missing number is:"<<missing;
    return 0;
}
*/





/**
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers of elelments:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxFreq=0,maxElement;
    for(int i=0;i<n;i++)
    {
      int count=1;

    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]){
            count++;
        }
    }  
        if(count>maxFreq){
            maxFreq=count;
            maxElement=arr[i];
        }
    }
      cout<<"elements with maximum frequency:"<<maxElement<<endl;
      cout<<"Frequency:"<<maxFreq<<endl;
    return 0;
}

*/



/**
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter the numbers of elelments:";
    cin>>n;

    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the required sum:";
    cin>>sum;

    bool found=false;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==sum)
        {
            cout<<"pair found:"<<arr[i]<<"and"<<arr[j]<<endl;
            found=true;
        }
      } 
        }
        if (found)
        {
            cout<<"no pair found with the given sum:";
        }
        return 0;
    }
     
*/



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers of elelments:";
    cin>>n;

    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array after removing duplicates:";
    
    for(int i=0;i<n;i++)
    {
      bool duplicate=false;
      for(int j=0;j<i;j++)
      {
        if (arr[i]==arr[j])
        {
            duplicate=true;
            break;
        }
      }
        if (!duplicate)
        {
            cout<<arr[i]<<"";
        }
    }
    return 0;
}
