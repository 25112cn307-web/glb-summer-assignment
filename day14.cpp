/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of elements:";
    cin>>n;

    int arr[n];

    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"duplicate elements are:";
    bool found=false;

    for(int i=0;i<n;i++)
    {
        bool alreadyPrinted=false;

        for(int k=0;k<i;k++){
            if(arr[i]==arr[k])
            {
                alreadyPrinted=true;
                break;
            }
        }

        if(alreadyPrinted)
        continue;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<"";
                found =true;
                break;
            }
            }
    }
    if(!found){
        cout<<"no duplicates elements found.";
    }
    return 0;
    }
    
*/


#include<iostream>
using namespace std;

int main()
{
    int n,element,count=0;
    cout<<"enter the number of elements:";
    cin>>n;

    int arr[n];

    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the elements to find its frequency.";
    cin>> element;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==element){
            count++;
        }
    }
    cout<<"frequency of"<<element<<"="<<count<<endl;
    return 0;
}