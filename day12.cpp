 
 /*
 #include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<"";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"enter the number of terms:";
    cin>>n;
    cout<<"fibonacci series:";
    fibonacci(n);
    return 0;
}
    */




/*
     #include<iostream>
    using namespace std;
    bool isArmstrong (int n)
    {
        int original=n,rem,sum=0;
        while(n>0)
        {
            rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
        }
        return(sum==original);
    }
    int main()
        {
            int num;
            cout<<"enter a number:";
            cin>>num;
            if(isArmstrong(num))
            cout<<num<<"is an Armstrong number:";
            else
            cout<<num<<"is not a Armstrong number:";
            return 0;
        }
    */





/*
    #include<iostream>
    using namespace std;
    bool isPalindrome (int n)
    {
        int original=n,reverse,rem;
        while(n>0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n=n/10;
        }
        return(original==reverse);
    }
    int main()
        {
            int num;
            cout<<"enter a number:";
            cin>>num;
            if(isPalindrome(num))
            cout<<num<<"is an Palindrome number:";
            else
            cout<<num<<"is not a Palindrome number:";
            return 0;
        }
    */




#include<iostream>
    using namespace std;
    bool isPerfect(int n)
    {
        int sum;
         for(int i=1;i<=n/2;i++){
            if (n%i==0)
            sum+=i;
         }
        return(sum==n);
    }
    int main()
        {
            int num;
            cout<<"enter a number:";
            cin>>num;
            if(isPerfect(num))
            cout<<num<<"is an Perfect number:";
            else
            cout<<num<<"is not a Perfect number:";
            return 0;
        }
    
   