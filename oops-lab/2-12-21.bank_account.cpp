#include<iostream>
 using namespace std;
  class bank{
       protected: string bank_name,cust_name,mobile_no,branch_name;
       double amount;
       public:
       void get_bank(){   cout<<"\n\t\t\t enter the bank name,customer name, mobile no, branch name...\n";
       getline(cin,bank_name);   getline(cin,cust_name);
       getline(cin,mobile_no);  getline(cin,branch_name);
       cout<<"\n enter the amount...\n";
       cin>>amount;

        }
  };

   class account : public bank{
    protected:
       double withdraw;
        public:
          void deposit(){ cout<<"\n enter the amount to be deposit....";  cin>>amount; }
          void get_withdraw()
          {   cout<<"\n enter the amount to be withdraw...";
              cin>>withdraw;
               if(withdraw > amount)
                cout<<"**** insufficient amt..";
          else
            amount-=withdraw;
          }
          void display(){
        cout<<"\n bank name is : "<<bank_name<<"\n customer name is : "<<cust_name<<"\n mobile num is : "<<mobile_no<<"\n branch name is :"<<branch_name;
       }
   };

   class saving_account : public  account {
   protected:
   public:

       void display(){
        cout<<"\n bank name is : "<<bank_name<<"\n customer name is : "<<cust_name<<"\n mobile num is : "<<mobile_no<<"\n net balance is :"<<amount;
       }

   };

   int main(){
         int n,i=0;  cout<<"\n enter the num of customer...\n"; cin>>n;  int ch;
        saving_account obj[n];


         do{
                obj[i].get_bank();
         cout<<"\n enter ur choice...\n";
                cin>>ch;
              switch(ch)
              { case 1: obj[i].deposit(); break;
                case 2:   obj[i].get_withdraw();  break;
                case 3 :  obj[i].display();  break;
                 default : cout<<"invalid choice..";
                  }
              i++;
              cin>>ch;
         }while(ch!=0);
         for(int j=0 ; j<i ; j++)
         obj[i].display();
            return 0;
   }
