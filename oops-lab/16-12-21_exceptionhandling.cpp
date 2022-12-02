#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    float rate , hour,pay;
    cout<<"\n enter the rate for per hour...";
    cin>>hour;

     try
     {
         cin>>rate;

         if(rate !=0 && hour!=0 )
            if(hour>40)
            cout<<"extra pay to employee "<<1.5*rate*hour;
            else
             cout<<"Normal  pay to employee "<<rate*hour;
         else
            throw(rate);
     }
     catch(const char *p )
     {
      cout<<"\n please enter the numeric  value...";

     }

    return 0;
}
