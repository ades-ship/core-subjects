#include<iostream>
#include<stdio.h>
#define max 100
 using namespace std;
    class bank{
  protected :
      string name,userid,address;
      string gender;
  public:
      void getdata(){
        cout<<"\n enter the name ,userid , address,gender ...";    getchar();
         getline(cin,name);   getline(cin,userid);   getline(cin,address);   getline(cin,gender);

      }
    };

    class account: public bank{
    protected:
        string acc_num;
        double bal,withdraw;
        public:
             void account_detail()
             {
          cout<<"\n enter the accc number...";  cin>>acc_num;
           cout<<"\n enter the amount to be deposited";  cin>>bal;
             }
           void with_draw(){
               cout<<"\n enter the amount to be withdraw...";
                cin>>withdraw;
                  if(bal>withdraw && withdraw!=0)  { cout<<"\n successful withdraw ...";
                        bal= bal - withdraw;
                  }
                  else if(withdraw==0)  cout<<"\n no withdraw...";
                  else  cout<<"\n insufficient balance...";
           }

    };

    class saving_account: public account {
     protected :  double bank_interest;
        public:
            void interest(){ cout<<"\n enter the bank interest..."; cin>>bank_interest;}
            void display(){
              cout<<"\nbank holder name is  :"<<name;
               cout<<"\nbank holder userid is :"<<userid;
                cout<<"\nbank holder adddress is :"<<address;   cout<<"\nbank holder gender is :"<<gender;
                cout<<"\nbank holder a/c no is :"<<acc_num;
                 cout<<"\nbank holder balance is :"<<bal;
            }

    };

int main()
{

     int choice;

       saving_account obj[max];  int customer; cout<<"\n enter the number of customer...."; cin>>customer;

       for(int i=0 ; i<customer ; i++) {
            cout<<"\n enter the detail of customer "<<i+1;;
        obj[i].getdata();   obj[i].account_detail();   obj[i].with_draw();
       }
      cout<<"\n \t\t\t\t enter customer details are ..... ";
      for(int i=0 ; i<customer  ; i++)
        {
            cout<<"\t\t\t\t********* customer "<<i+1<<"\n";
           obj[i].display();
        }
   return 0;
  }
