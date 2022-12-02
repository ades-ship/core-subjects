#include<iostream>
using namespace std;
class A{
    public:  int x1;
     A(int x){
         cout<<"\na classs";
         cout<<x1;
     }

};
class B{
    public:
     int y1;
    B(float y)
    { cout<<"\nb classs";
     cout<<y1;
      }


};

 class C : public B , public A{
     public:   int c;
       C(int x, float b,  int c)  : A(x),  B(b)
       {
          this->c=c;
          cout<<"\n"<<c;
          cout<<"\n fdsgsfgf";
       }
 };
int main()


{
    double a;
     cin>>a;
     cout<<a;
    C obj(1,1.5,3);

     return 0;
}
