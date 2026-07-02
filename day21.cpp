
/*#include<iostream>
using namespace std;
int main(){
    char str[100];
    int length=0;
    cout<<"enter a string:";
    cin.getline(str,100);

    while(str[length]!='\0'){
        length++;
    }
    cout<<"length of the string="<<length<<endl;

    return 0;
}
*/

/*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,rev="";
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    cout<<"reversed string"<<rev<<endl;
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
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<"uppercase string"<<str<<endl;
    return 0;
}
*/


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int vowels=0,consonants=0;
    cout<<"enter a string:";
    getline(cin,str);
    for(char ch:str){
        if((ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')){
            if(ch>='A'&&ch<='E'||ch>='I'&&ch<='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                vowels++;
            }
            else{
                consonants++;
            }
            }
        }
        cout<<"number of vowels= "<<vowels<<endl;
        cout<<"number of consonants="<<consonants<<endl;
        return 0;
    }