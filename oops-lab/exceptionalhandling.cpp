// wap to calculate pay computation to give the employee rate per hours and
//above 40 hours extra pay with 1.5times with same rate and extra time;

#include <string>
#include <iostream>
using namespace std;

int main()
{
    float rate,hours,pay;
    try{
        cout<<"\nenter the rate per hours...";
      cin>>rate;
      cout<<"\nenter the hours...";
      cin>>hours;
       if(rate>0 && hours>0 && hours<=40)
       {
        pay=rate*hours;
         cout<<"\n normal pay "<<pay;
       }

       else if(hours>40 && rate >0 )
       {

        pay=40*rate + (hours-40)*1.5*rate;
         cout<<" normal and extra pay "<<pay;
       }

      else if(hours<0 && rate<0)
        throw("rate and time cannot be negative..");

       else if(hours<0)
       {
         throw("time cant be negative");
          // throw(int rate);

       }
       else if(rate<0)
       {
         throw("rate cant be negative..");

       }


    else if(hours<0 && rate <0)
         throw("rate nd time cannot be negative..");
        else;
    }

    catch(const char *st1)
    {
        cout<<st1;
    }
    catch(const char *p)
    {
        cout<<p;
    }

    catch(const char *rate)
    {

        cout<<rate;
    }

     catch(const char *q)
    {

        cout<<q;
    }

    return 0;
}
