/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"factors of"<<num<<"are:";

    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<"";

        }
    }
   return 0;

}
   */



  /**
   *  #include<iostream>
using namespace std;

int main(){
    long long num;
    cout<<"enter a number:";
    cin>>num;

    long long largestPrimefactor=-1;

    while(num%2==0){
        largestPrimefactor=2;
        num/=2;
    }
    for(long long i=3;i*i<=num;i+=2){
        while(num%i==0){
            largestPrimefactor=i;
            num/=i;
        }
    }
    if(num>2)
    largestPrimefactor=num;
    cout<<"larest Prime factor="<<largestPrimefactor;
    return 0;
}
    */





   /** #include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout<<"enter a number:";
    cin>>num;

    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum==num)
    cout<<num<<"is a perfect number:";
    else
    cout<<num<<"is not a perfect number:";
    return 0;
}*/




#include<iostream>
using namespace std;

int main(){
    int num,temp,digit,sum=0;
    cout<<"enter a number:";
    cin>>num;

    temp=num;

    while(temp>0){
        digit=temp%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num)
    cout<<num<<"is a strong number:";
    else
    cout<<num<<"is not a strong number:";
return 0;
}
