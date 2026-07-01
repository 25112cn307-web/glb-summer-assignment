/*#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==0||n==1)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;

    cout<<"factorial="<<factorial(n);
    return 0;
}
    */

/**
    #include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"enter the number of terms:";
    cin>>n;

    cout<<"fibonaccci series:";
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<"";
    }
    return 0; 
}
    */



/**
    #include<iostream>
using namespace std;

int sumofDigit(int n)
{
    if(n==0)
    return 0;

    return(n%10)+sumofDigit(n/10);
}

int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    cout<<"sum fo digits="<<sumofDigit(num);
    return 0;
}*/






#include<iostream>
#include<cmath>
using namespace std;

int reverseNum(int n,int digits){
    if(n==0)
    return 0;

    return(n%10)*pow(10,digits-1)+reverseNum(n/10,digits-1);
}

int main()
{
    int num;
    cout<<"enter a number :";
    cin>>num;
    int digits=0,temp=num;

    while(temp>0)
    {
        digits++;
        temp/=10;
    }
    cout<<"reversed number="<<reverseNum(num,digits);
    return 0;
}