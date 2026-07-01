/*#include<iostream>
using namespace std;
int main() 
{
    int n1,n2;
    cout<<"enter size of first array:";
    cin>>n1;
    int arr1[n1];

    cout<<"enter elements of first array:";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter size of second array:";
    cin>>n2;
    int arr2[n2];
    cout<<"enter elements of second array:";
    for(int i=0;i<n2;i++)
    {
      cin>>arr2[i];
    }


    cout<<"common elements are:";
    bool found=false;

    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        if(arr1[i]==arr2[j]){
          cout<<arr1[i]<<"";
          found=true;
          break;
        }
      }
    }
    if(!found){
      cout<<"no common elements";
    }
    return 0;
  }
    */


/*
   #include<iostream>
using namespace std;
int main() 
{
    int n1,n2;
    cout<<"enter size of first array:";
    cin>>n1;
    int arr1[n1];

    cout<<"enter elements of first array:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter size of second array:";
    cin>>n2;
    int arr2[n2];
    cout<<"enter elements of second array:\n";
    for(int i=0;i<n2;i++)
    {
      cin>>arr2[i];
    }


    cout<<"intersection of arrays:";
    

    for(int i=0;i<n1;i++)
    {
      bool alreadyPrinted=false;
      for(int k=0;k<i;k++)
      {
        if(arr1[i]==arr1[k]){
        alreadyPrinted=true;
        break;
        }
      }
    
    if(alreadyPrinted)
    continue;{
     
      for(int j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
          cout<<arr1[i]<<"";
          break;
        }
      }
    }
    return 0;
  }


   */







 #include<iostream>
    using namespace std;
    int main()
    {
      int n1,n2;
      cout<<"enter size of first array:";
      cin>>n1;
      int arr1[n1];

      cout<<"enter elements of first array:\n";
      for(int i=0;i<n1;i++){
        cin>>arr1[i];
      }

      cout<<"enter size of second array:";
      cin>>n2;
      int arr2[n2];

      cout<<"enter elementa of second array:\n";
      for(int i=0;i<n2;i++){
        cin>>arr2[i];
      }
      cout<<"union of arrays:";

      for(int i=0;i<n1;i++){
        cout<<arr1[i]<<"";
      }


      for(int i=0;i<n2;i++){
        bool found =false;

        for(int j=0;j<n1;j++){

      if(arr2[i]==arr1[j]){
        found =true;
        break;
      }
      }
        if(!found){
          cout<<arr2[i]<<"";
        }
      }
      return 0;
    }

/*
    #include<iostream>
    using namespace std;
    int main()
    {
      int n1,n2;
      cout<<"enter size of first array:";
      cin>>n1;
      int arr1[n1];

      cout<<"enter elements of first array:\n";
      for(int i=0;i<n1;i++){
        cin>>arr1[i];
      }

      cout<<"enter size of second array:";
      cin>>n2;
      int arr2[n2];

      cout<<"enter elementa of second array:\n";
      for(int i=0;i<n2;i++){
        cin>>arr2[i];
      }
      int merged[n1+n2];

      for(int i=0;i<n1;i++){
        merged[i]=arr1[i];
      }
      for(int i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
      }
      cout<<"merged array:";
      for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<"";
      }
      return 0;
    }
      */