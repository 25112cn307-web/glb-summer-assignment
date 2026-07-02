
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    bool palindrome=true;
    cout<<"enter a string:";
    cin>>str;

    int n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            palindrome=false;
            break;
        }
    }
    if(palindrome)
    cout<<"the string is a palindrome:";
    else
        cout<<"the string is not a palindrome :";
    return 0;
}
    */




    #include<iostream>
    #include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int count=1;
        if(str[i] == "\0")
        continue;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
                str[j]="\0";
            }
        }
        if(str[i]!="\0")
        cout<<str[i]<<"="<<count<<endl;
    }
    return 0;
}