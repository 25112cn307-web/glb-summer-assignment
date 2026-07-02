/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"enter first string:";
    cin>>str1;
    cout<<"enter second string:";
    cin>>str2;
    if(str1.length()!=str2.length()){
        cout<<"strings are not rotations of each other:"<<endl;
    }
    else{
        string temp=str1+str1;
        if (temp.find(str2)!=string::npos)
        cout<<"strings are rotations of each other:"<<endl;
        else
        cout<<"strings are not rotations of each other:"<<endl;
    }
return 0;
*/
    


/**
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,compressed="";
    cout<<"enter a string:";
    cin>>str;
    int count=1;
    for(int i=0;i<str.length();i++){
        if(i<str.length()-1&&str[i]==str[i+1]){
            count++;
        }
        else{
            compressed+=str[i];
            compressed+=to_string(count);
            count=1;
        }
    }
    cout<<"compressed string:"<<compressed<<endl;
    return 0;
}
   */




/**
   #include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,result="";
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        bool duplicate =false;
        for(int j=0;j<result.length();j++){
            if(str[i]==result[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            result+=str[i];
        }
    }
    cout<<"string after removing duplicates:"<<result<<endl;
    return 0;
}

*/







#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    string sentence,word,longestWord;
    cout<<"enter a sentence:";
    getline(cin,sentence);
    stringstream ss(sentence);

    while(ss>>word){
        if(word.length()>longestWord.length()){
            longestWord=word;

        }
    }
    cout<<"longest.word:"<<longestWord<<endl;
    cout<<"length:"<<longestWord.length()<<endl;
    return 0;
}