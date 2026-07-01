/*
#include<iostream>
using namespace std;

int main(){
     int decimal,binary=0,place=1,remainder;
    cout<<"enter a decimal number:";
    cin>>decimal;

    while(decimal>0)
    remainder=decimal%2;
    binary+=remainder*place;
    place*=10;
    decimal/=2;
}
cout<<"binary number="<<binary<<endl;
return 0;
}
*/

/**
#include<iostream>
using namespace std;

int main()
{
int num,count=0;

cout<<"enter a number:";
cin>>num;

while(num>0){
    count+=num%2;
    num/=2;
}
cout<<"number of set bits="<<count<<endl;
return 0;
}
*/

/**
#include<iostream>
using namespace std;

int main()
{
    long long binary;
int decimal=0,base=1,remainder;

cout<<"enter a binary number:";
cin>>binary;

while(binary>0){
    remainder=binary%10;
    decimal+=remainder*base;
    base*=2;
    binary/=10;
}
cout<<"decimal number="<<decimal<<endl;
return 0;
}*/




#include<iostream>
using namespace std;
int main(){
    int x,n;
    long long result=1;
    cout<<"enter base(x):";
    cin>>x;

    cout<<"enter exponent(n):";
    cin>>n;
    for(int i=1;i<=n;i++){
        result*=x;
    }
    cout<<x<<"^"<<n<<"="<<result<<endl;
    return 0;

}