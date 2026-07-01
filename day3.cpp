/*
#include<iostream>
using namespace std ;
int main (){
    int start, end,i,j;
    bool isPrime;
    cout<<"enter starting number:";
    cin>>start;
    cout<<"enter  ending number:";
    cin>>end;
    cout<<"prime number between"<<start<<"and"<<end<<"are:\n";
    for(i=start;i<=end;i++)
    {
    if(i<2)
    continue;

    isPrime=true;

    for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
            isPrime=false;
            break;
        }
    }

    if(isPrime)
    cout<<i<<"";
    }
    return 0;
}
*/






/*
#include<iostream>
using namespace std ;
int main (){
    int n,i;
    bool isPrime=true;
    cout<<"enter a number:";
    cin>>n;
    if(n<=1)
    {
    isPrime=false;
    }
    else{
        for(i=2;i*i<=n;i++){
        if(n%i==0)
    {
        isPrime=true;
        break;
    }
    }
}

if(isPrime)
cout<<n<<"is a prime number ";
else
cout<<n<<"is not a prime number";
return 0;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;

    cout<<"enter two numbers:";
    cin>>num1>>num2;

    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }

    cout<<"GCD="<<num1<<endl;

    return 0;

}

*/




#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int num1,num2,lcm;
cout<<"enter two numbers";
cin>>num1>>num2;

lcm=(num1*num2)/gcd(num1,num2);

cout<<"LCM of"<<num1<<"and"<<num2<<"="<<lcm<<endl;
return 0;
}