/*
#include<iostream>
using namespace std;

   int maximum(int a,int b)
   {
    if(a>b)
    return a;
    else
    return b;
   }
   int main()
   {
    int num1,num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    cout<<"maximum number="<<maximum(num1,num2);
    return 0;
   }
    */

/*
    #include<iostream>
    using namespace std;
    int sum(int a,int b){
        return a+b;
    }
    int main()
    {
        int num1,num2;
        cout<<"enter two numbers:";
        cin>>num1>>num2;
        cout<<"sum="<<sum(num1,num2);
        return 0;
    }
        */
/*

         #include<iostream>  
    using namespace std;
    bool isPrime(int n)
    {
        if(n<=1)
        return false;
        for (int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    int main()
    {
        int num;
        cout<<"ente a number:";
        cin>>num;
        if (isPrime(num))
        cout<<num<<"is a prime number:";
        else
        cout<<num<<"is not a prime number:";
        return 0;
    }
        */

         #include<iostream>
    using namespace std;
    long long factorial(int n)
    {
        long long fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    int main()
    {
        int num;
        cout<<"enter the number:";
        cin>>num;
        cout<<"factorial of"<<num<<"="<<factorial(num);
        return 0;
    }