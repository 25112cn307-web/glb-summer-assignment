/*#include<iostream>
    using namespace std;
int main(){
int n,sum=0,digit;

    cout<<"enter a number:";
    cin>>n;
while(n!=0)
{
digit=n%10;
sum+=digit;
n/=10;
}
cout<<"sum of digit="<<sum;
return 0;
}    
*/

//reverse of number
/*
#include<iostream>
using namespace std;
int main(){
int n,reverse=0,digit;

    cout<<"enter a number:";
    cin>>n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<"reversed number="<<reverse;
    return 0;
}
*/




/*
#include<iostream>
using namespace std;
int main(){
int n,digit;
 long long product=1;

    cout<<"enter a number:";
    cin>>n;
   while(n!=0){
    digit=n%10;
    product=product*digit;
    n=n/10;
   } 
   cout<<"product of digits="<<product;
   return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
int num,original,reverse=0,rem;

    cout<<"enter a number:";
    cin>>num;

    original=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;

    }

    if(original==reverse)
      cout<<original<<"is a palindrome number.";
      else
      cout<<original<<"is not a palindrome number.";
      return 0;
}
