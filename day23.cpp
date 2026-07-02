/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);

    bool found =false;
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
if(count==1){
    cout<<"first non repeating character:"<<str[i]<<endl;
    found=true;
    break;
}
    }
    if (!found){
        cout<<" no non-repeatingcharacter found:"<<endl;
    }
    return 0;
}
 */             





/**
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);

    bool found =false;
    for(int i=0;i<str.length();i){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cout<<"first repeating character:"<<str[i]<<endl;;
            found=true;
            break;
            }
        }
if(found)
break;
    }
if (found){ 
    cout<<"no repeating character found:"<<endl;

    }
    return 0;
}
              */








/**
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);

    int maxCount=0;
    char maxChar;

    
    for(int i=0;i<str.length();i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
if(count>maxCount){
   maxCount=count;
   maxChar=str[i];
}
    }
    
        cout<<" Maximum occurring character:"<<maxChar<<endl;
        cout<<"frequency:"<<maxCount<<endl;
    
    return 0;
}
              */





#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"enter first string:";
    cin>>str1;
    cout<<"enter second string:";
    cin>>str2;
    if(str1.length()!=str2.length()){
        cout<<"strings are noy anagrams:"<<endl;
        return 0;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2)
    cout<<"strings are anagrams:"<<endl;
    else 
    cout<<"strings are not anagrams:"<<endl;

return 0;
}              