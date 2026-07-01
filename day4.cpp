/*
#include <iostream>
using namespace std;
int main(){
    int a=0,n,b=1,c;
    cout<<"enter the number of terms:";
    cin>>n;
    cout<<"fibbonacci series:";
    for(int i=1;i<=n;i++){
        cout<<a<<"";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
    */





//     finding fibonacci term:
/*
    #include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int a=0,b=1,c;
    if (n==1)
    {
        cout<<"the"<<n<<"st fibonacci term is"<<a;
    }
    else if (n==2)
    {
        cout<<"the "<<n<<"nd fibonacci terrm is"<<b;
    }
      else{
        for (int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<"the"<<n<<"th fibonacci term is"<<b;
      }
      return 0;
    }
      */




/*
#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int num,temp,digits=0,digit;
    int sum=0;
    cout<<"enter the number:";
    cin>>num;

    temp=num;

    while(temp>0){
        digits++;
        temp/=10;
    }

    temp=num;

    while(temp>0){
         digit=temp %10;
        sum += pow(digit,digits);
        temp /=10;
    }
    if(sum==num)
    cout<<num<<"is an armstorng number:";
    else
    cout<<num<<"is not a armstrong number:";
    return 0;
}
*/




#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int start,end;
    
    cout<<"enter the  starting number:";
    cin>>start;

    cout<<"enterr the ending number:";
    cin>>end;

    cout<<"armstrong number between"<<start<<"and"<<end<<"are:\n";

    for(int num=start;num<=end;num++){
        int temp=num,digits=0;
        int sum=0;
    


    while(temp>0){
        digits++;
        temp/=10;
    }

    temp=num;

    while(temp>0){
        int digit=temp %10;
        sum += pow(digit,digits);
        temp /=10;
    }
    if(sum==num){
    cout<<num<<"";
}
}
return 0;
}




