/*
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the size of first sorted array:";
    cin>>n1;
    int arr1[n1];
    cout<<"enter elelments of first sorted array:";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter size of second sorted array:";
    cin>>n2;
    int arr2[n2];
    cout<<"enter elements of second sorted array:";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int merged[n1+n2];
    int i=0,j=0,k=0;

    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            merged[k++]=arr1[i++];
        }
        else{
            merged[k++]=arr1[j++];
        }
    }
    while(i<n1)
    {
merged[k++]=arr1[i++];
    }
    while(j<n2)
    {
        merged[k++]=arr2[j++];
    }
    cout<<"merged sorted array:";
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<"";
    }
    return 0;
}
     */






/**

    #include<iostream>
    using namespace std;
    int main(){
    int n;
    cout<<"enter number of names:";
    cin>>n;
    
    string names[n];
    cout<<"enter names:\n";
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline (cin,names[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (names[i]>names[j]){
                string temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }
    cout<<"\nNames in alphabetical order:\n";
    for(int i=0;i<n;i++)
    {
        cout<<names[i]<<endl;
    }
    return 0;
}
*/




/*
#include<iostream>
#include<string>
    using namespace std;
    int main(){
    int n;
    cout<<"enter number of words:";
    cin>>n;
    
    string words[n];
    cout<<"enter words:\n";
    for(int i=0;i<n;i++)
    {
     cin>>words[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (words[i].length()>words[j].length()){
                string temp=words[i];
                words[i]=words[j];
                words[j]=temp;
            }
        }
    }
cout<<"\nWords sorted by length:\n";
    for(int i=0;i<n;i++)
    {
        cout<<words[i]<<endl;
    }
    return 0;
}
  */  



#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"enter first string:";
    getline(cin,str1);
    cout<<"enter second string:";
    getline(cin,str2);
    cout<<"common characters are:";
    for(int i=0;i<str1.length();i++){
        bool found=false;
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                found=true;
                break;
            }
        }
        bool duplicate=false;
        for(int k=0;k<i;k++){
            if(str1[i]==str1[k]){
                duplicate=true;
                break;
            }
        }
        if (found&&!duplicate){
            cout<<str1[i]<<"";
        }
    }
    return 0;
}