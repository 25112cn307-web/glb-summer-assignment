 /*
 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    int totalseats=50;
    int bookedseats=0;
    int choice,seats;

    do{
        cout<<"\n====TICKET BOOKING SYSTEM====\n";
        cout<<"1. book ticket\n";
        cout<<"2. view available seats\n";
         cout<<"3.cancel ticket\n";
          cout<<"4. exit\n";
           cout<<"enter your choice:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
              cout<<"enter number of seats to book:";
              cin>>seats;

              if(bookedseats+seats<=totalseats){
                bookedseats+=seats;
                cout<<seats<<"seats(s) booked successful.\n";
              }
              else{
                cout<<"not enough seats available!\n";
              }
              break;

            case 2:
            cout<<"total seats:"<<totalseats<<endl;
            cout<<"booked seats:"<<bookedseats<<endl;
            cout<<"available seats:"<<totalseats-bookedseats<<endl;
            break;

            case 3:
              cout<<"enter number of seats to cancel:";
              cin>>seats;

              if(seats<=bookedseats){
                bookedseats-=seats;
                cout<<seats<<"seat(s) cancelled successfuly.\n";

              }
              else{
                cout<<"invalid number of seats!\n";
              }
              break;

              case 4:
                cout<<"thank you for using ticket booking system.\n";
                break;

                default:
                cout<<"invalid choice! try again.\n";
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
    string accountholder;
    int accountnumber;
    double balance=0,amount;
    int choice;

        cout<<"====Create bank account====\n";
        cout<<"enter account hoder name:";
        getline(cin,accountholder);

        cout<<"enter account number:";
        cin>>accountnumber;


do{
        cout<<"\n====bank account system====\n";    
        cout<<"1. deposit money\n";
        cout<<"2. withdraw money\n";
         cout<<"3.check balance\n";
          cout<<"4.account details\n";
           cout<<"exit\n";
           cout<<"enter your choice:";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
              cout<<"enter amount to deposit:";
              cin>>amount;
              balance+=amount;
              cout<<"amount deposited successfully:\n";
              break;

            case 2:
            cout<<"enter amount to withdraw:";
            cin>>amount;
            if(amount<=balance){
                balance-=amount;
                cout<<"amount withdrawn succcessfully:\n";
            }
            else{
                cout<<"insufficient balance!\n";
            }
            break;
           

            case 3:
              cout<<"current balance:Rs."<<balance<<endl;
              break;

              case 4:
                cout<<"\naccount holder:"<<accountholder<<endl;
                cout<<"account number:"<<accountnumber<<endl;
                cout<<"balance:Rs."<<balance<<endl;
                break;                
                
                    case 5:
                      cout<<"thank you for using the bank account system.\n";
                      break;

                      default:
                        cout<<"invalid choice! try again.\n";
                }
            }

 while(choice!=5);
 
 return 0;
}
