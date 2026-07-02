
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    int choice;

    cout<<"enter a string :";
    getline(cin,str);

    do
    {
      cout<<"\n====string operations menu====\n";
      cout<<"1. find length\n";
      cout<<"2. reverse string\n";
      cout<<"3. convert to uppercase\n";
      cout<<"4. convert to lowercase\n";
      cout<<"5. check palindrome\n";
      cout<<"6. exit\n";
      cout<<"enter your choice:";
      cin>>choice;

      switch(choice)
      {
        case 1:
         cout<<"length of string:"<<str.length()<<endl;
         break;

         case 2:
         {
           string rev=str;
           reverse(rev.begin(),rev.end());
           cout<<"reversed string:"<<rev<<endl;
           break;
      }

      case 3:
      {
        string upper=str;
        for(char&c:upper)
        c=toupper(c);
        cout<<"uppercase string:"<<upper<<endl;
        break;
      }

      case 4:{

        string lower=str;
        for(char&c:lower)
        c=tolower(c);
        cout<<"lowercase string:"<<lower<<endl;
        break;
    }

    case 5:
    {
        string rev=str;
        reverse(rev.begin(),rev.end());

        if(str==rev)
        cout<<"string is a palindrome."<<endl;
        else
        cout<<"string is not a palindrome."<<endl;
        break;
    }
    case 6:
      cout<<"exiting program..."<<endl;
      break;

      default:
      cout<<"invalid choice!"<<endl;
}
}
while(choice!=6);
return 0;
}

*/

/**
#include<iostream>
using namespace std;

int main(){
  int choice;
  double num1,num2,result;

  do
  {
    cout<<"\n====calculator menu====\n";
    cout<<"1. addition\n";
    cout<<"2. subtraction\n";
    cout<<"3. multiplication\n";
    cout<<"4.divison\n";
    cout<<"5. exit\n";
    cout<<"enter your choice:";
    cin>>choice;

    if(choice>=1&&choice<=4)
    {
      cout<<"enter two numbers:";
      cin>>num1>>num2;
    }

    switch(choice)
    {
      case 1:
        result=num1+num2;
      cout<<"result="<<result<<endl;
      break;

      case 2:
        result=num1-num2;
        cout<<"result="<<result<<endl;
        break;

       case 3:
         result=num1*num2;
         cout<<"result"<<result<<endl;
         break;

         case 4:
          if(num2!=0)
          {
            result=num1/num2;
            cout<<"result="<<result<<endl;
          }

          else
           {
            cout<<"divison by zero is not alllowed"<<endl;
           }
           break;

           case 5:
             cout<<"exiting calculator..."<<endl;
             break;

             default:
             cout<<"invalid choice!"<<endl;
          }

        }
        while(choice!=5);
        return 0;
      }

*/




/**
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string str;
  int choice;

  cout << "enter a string :";
  getline(cin, str);

  do
  {
    cout << "\n====string operations menu====\n";
    cout << "1.find length\n";
    cout << "2.reverse string\n";
    cout << "3.convert to  uppercase\n";
    cout << "4.convert to lowercase\n";
    cout << "5.check palindrome\n";
    cout << "6.exit\n";
    cout << "enter your choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "length of string:" << str.length() << endl;
      break;

    case 2:
    {
      string rev = str;
      reverse(rev.begin(), rev.end());
      cout << "reversed string:" << rev << endl;
      break;
    }

    case 3:
    {
      string upper = str;
      for (char &c : upper)
        c = toupper(c);
      cout << "uppercase string:" << upper << endl;
      break;
    }

    case 4:
    {
      string lower = str;
      for (char &c : lower)
        c = tolower(c);
      cout << "lowercasse string:" << lower << endl;
      break;
    }

    case 5:
    {
      string rev = str;
      reverse(rev.begin(), rev.end());

      if (str == rev)
        cout << "string is a palindrome." << endl;
      else
        cout << "string is not a palindrome." << endl;
      break;
    }

    case 6:
      cout << "exiting program..." << endl;
      break;

    default:
      cout << "invalid choice!" << endl;
    }
  } while (choice != 6);
  return 0;
}

*/










#include <iostream>
#include <string>
    using namespace std;

class inventory
{
private:
  int id[100], quantity[100], count = 0;
  string name[100];

public:
  void additem()
  {
    cout << "\nenter item id:";
    cin >>id[count];

    cin.ignore();
    cout << "enter item name:";
    getline(cin, name[count]);

    cout << "enter quantity:";
    cin >> quantity[count];

    count++;
    cout << "item added successfully!\n";
  }

  void displayitems()
  {
    if (count == 0)
    {
      cout << "\nno items available .\n";
      return;
    }
    cout << "\ninventory list:\n";
    cout << "id\tname\t\tquantity\n";

    for (int i = 0; i < count; i++)
    {
      cout << id[i] << "\t" << name[i] << "\t\t" << quantity[i] << endl;
    }
  }
  void searchitem()
  {
    int searchid;
    cout << "\nenter item id to search:";
    cin >> searchid;

    for (int i = 0; i < count; i++)
    {
      if (id[i] == searchid)
      {
        cout << "\nitem found!\n";
        cout << "id." << id[i] << "\nname:" << name[i] << "\nquantity:" << quantity[i] << endl;
        return;
      }
    }
    cout << "item not found!\n";
  }

  void updatequantity()
  {
    int searchid;
    cout << "\nenter item id:";
    cin >> searchid;

    for (int i = 0; i < count; i++)
    {
      if (id[i] == searchid)
      {
        cout << "enter new quantity:";
        cin >> quantity[i];
        cout << "quantity updated sucessfully!\n";
        return;
      }
    }

    cout << "item not found!\n";
  }
};
int main()
{
  inventory inv;
  int choice;

  do
  {
    cout << "\n====inventory manangement system====\n";
    cout << "1.add item\n";
    cout << "2.display item\n";
    cout << "3.search item\n";
    cout << "4.update quantity\n";
    cout << "5.exit\n";
    cout << "enter your choice:";
    cin>>choice;

    switch(choice)
    {
      case 1:
       inv.additem();
       break;

       case 2:
        inv.displayitems();
        break;
      
        case 3:
        inv.searchitem();
        break;

        case 44:
        inv.updatequantity();
        break;

        case 5:
        cout<<"exiting program..\n";
        break;

        default:
        cout<<"invalid choice!\n";
    }
  }
  while(choice!=5);
  return 0;
}


   