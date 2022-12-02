#include<iostream>
#include<ctype.h>
#define max 100
 using namespace std;
    class bank{
  protected :
      string name,accno,acctype;
     double balamt,takeamt;
  public:
        bank()
        {
            name=" adesh sengar";
            accno="12vv";
            acctype="saving";
            balamt=0.00;
        }

      void getdata(){
       cout<<"\n enter the depositor name";
         try{
           getline(cin>>ws,name);
             if(isdigit(name)==1)
                throw("pls enter the string for name ");


         }
         catch(const char *st)
         {
             cout<<st;
         }

       cout<<"\n enter the account num";  getline(cin>>ws,accno);
       cout<<"\n enter the acc type";  getline(cin>>ws,acctype);
      }
      void deposit()
      {
          cout<<"\n enter the amount to be deposited...";
           cin>>balamt;
      }
       void withdraw()
      {
          cout<<"\n enter the amount to be withdraw...";
           cin>>takeamt;
           if(balamt>=takeamt)
           {
                cout<<"\nwithdraw successful...";
                balamt-=takeamt;
           }
           else
             cout<<"\ninsufficent amount..";
      }

        void display(){
       cout<<"\ndepositor name : "<<name;
       cout<<"\n  account num "<<accno;
       cout<<"\nacc type "<<acctype;
       cout<<"\n net bal amt "<<balamt;
      }

    };

    int main()
    {
        bank obj; obj.getdata();

        //int cust;
     //  cout<<"\n enter the no of customer.. ";
        //cin>>cust;
    }
