#include<iostream>
 using namespace std;
 class student {
     public:  int a;
   protected :
       int age ;
       string name,enrol_no;
       float marks[5];
       public:
           student(){
               cout<<"\n enter the age ,name, enrolment no...\n";
             cin>>age;   getline(cin>>ws,name);
              cin>>enrol_no;
              cout<<"\n enter the marks of 5 subj...";
              for(int i=0 ; i<5 ; i++) cin>>marks[i];
           }
           void display(){
             cout<<"age is="<<age<<"\n"<<"name is="<<name<<"\n"<<"enrol no is="<<enrol_no<<"\n";
              for(int i=0 ; i<5 ;  i++)  cout<<marks[i]<<" ";
           }

 };
   class faculty{
        public: int a;
    protected:  string faculty_name,fac_code,dept,gender;
     double salary;  int age,experience;
     public:
     faculty(){
      cout<<"\n enter the faculty name,faulty code,dept,gender,salary,age,experience..";
      getline(cin>>ws,faculty_name) ;  getline(cin>>ws,fac_code); getline(cin>>ws,dept); getline(cin>>ws,gender);
      cin>>salary>>age>>experience;
     }
    void display(){
         cout<<"faculty name is :"<<faculty_name<<"\n";
         cout<<"faculty code is :"<<fac_code<<"\n";  cout<<"department is :"<<dept<<"\n";    cout<<"gender is :"<<gender<<"\n";
         cout<<"salary is :"<<salary<<"\t"<<"age is :"<<age<<"\t"<<"experience is "<<experience;
         }

   };

   class person: public student, public faculty{
    protected:
         float height;
    public:
        void disp(){
          cout<<"\n multiple inheritance...";
           cout<<"\n\t\t\t******  student details*********";
          student::display();
          cout<<"\n\t\t\t***** faculty details******";
           faculty :: display();


        }
   };
  int main()
  {
             person fac;

       fac.disp();

  }
