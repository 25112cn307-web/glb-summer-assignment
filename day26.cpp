/*
#include<iostream>
using namespace std;
int main(){
 int age;
 cout<<"====voting eligibility system===="<<endl;
 cout<<"enter your age:";
 cin>>age;

 if(age>=18){
    cout<<"you are eligible to vote:"<<endl;
 }
 else{
    cout<<"you are not eligible to vote:"<<endl;
    cout<<"you can vote after "<<(18-age)<<"year(s):"<<endl;
 }
 return 0;
}
 */





/**
 #include<iostream>
 #include<cstdlib>
 #include<ctime>
using namespace std;
int main(){
    int secretNumber,guess,attempts=0;
    srand(time(0));
    secretNumber=rand()%100+1;

    cout<<"====Number guessing Game===="<<endl;
    cout<<"guesss a number between 1and 100:"<<endl;
    do{
        cout<<"enter your guess:";
        cin>>guess;
        attempts++;
        if(guess>secretNumber)
        cout<<"too high!try again:"<<endl;
        else if(guess<secretNumber)
        cout<<"too low!try again:"<<endl;
        else
    
        cout<<"congratulations you guessed the number :"<<endl;
    }
    while(guess!=secretNumber);
    cout<<"number of attempts:"<<attempts<<endl;
    return 0;
}
    */





/**

    #include<iostream>
using namespace std;
int main(){
    int choice,pin=1234,enteredPin;
    double balance=10000.0,amount;

    cout<<"====ATM Simulation====\n";
    cout<<"enter PIN:";
    cin>>enteredPin;

    if(enteredPin!=pin){
        cout<<"invalid PIN!\n";
        return 0;
    }
    do{
        cout<<"\n====ATM Menu====\n";
        cout<<"1.check balance\n";
        cout<<"2.deposit money\n";
        cout<<"3.withdraw money\n";
        cout<<"4.exit\n";
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
                 cout<<"current balance Rs."<<balance<<endl;
                 break;
            case 2:
                cout<<"enter amount to deposit:";
                cin>>amount;
                balance+=amount;
                cout<<"deposit successful!\n";
                cout<<"updated balance Rs."<<balance<<endl;
                break;
            case 3:
                cout<<"enter amount to withdraw:";
                cin>>amount;

              if(amount<=balance){
                balance-=amount;
                cout<<"withdrawl successful!\n";
                cout<<"remaining balance Rs."<<balance<<endl;
              }  
              else{
                cout<<"insufficient balance!\n";
              }
              break;

              case 4:
                  cout<<"thank you for using ATM!\n";
                  break;
              default:
              cout<<"invalid choice!\n";    
 
        }
    }
    while(choice!=4);
        return 0;


    }
*/






#include<iostream>
#include<string>
using namespace std;

int main(){
    string questions[5]={
        "1.what is the capital of india?",
        "2.which language is used for c++ programming?",
        "3.how many days are there in a week",
        "4.what is 5+7?",
        "5.which planet is known as the red planet?"
    };

    string options[5][4]={
        {"A.delhi","B.mumbai","C.kolkata","D.chennai"},
        {"A.english","B.c++","C.hindi","D.javascript"},
        {"A.5","B.6","C.7","D.8"},
        {"A.10","B.11","C.12","D.13"},
        {"A.earth","B.venus","C.mars","D.jupiter"}
        };

        char answers[5]={'A','B','C','C','C'};
        char useranswer;
        int score=0;

        cout<<"====quiz application====\n";

        for(int i=0;i<5;i++)
        {
            cout<<"\n"<<questions[i]<<endl;

            for(int j=0;j<4;j++)
            {
                cout<<options[i][j]<<endl;
            }

            cout<<"enter your answer(A/B/C/D):";
            cin>>useranswer;

            if(toupper(useranswer)==answers[i])
            {
                cout<<"correct!\n";
                score++;
            }

            else{
                cout<<"wrong! correct answer is"<<answers[i]<<"\n";
            }
        }

        cout<<"\n=====RESULT====\n";
        cout<<"your score :"<<score<<"out of 5 \n";

        if(score==5)
        cout<<"excellent!\n";
        else if(score>=3)
        cout<<"good job!\n";
        else
        cout<<"better luck next time!\n";

        return 0;
    }
