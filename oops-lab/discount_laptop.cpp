#include <iostream>
#include<string>
using namespace std;

void cust_details()
{
    string name,address;
    cout << "enter name and address of customer\n";
      getline(cin>>ws,name);   getline(cin>>ws,address);
    cout << "name of the customer is : " << name << "\n"
         << "address is : " << address;
}

void display()
{
}
void laptop(float amt)
{
    float disc = 0.00, net = 0.00;
    if (amt >= 0 && amt <= 25000)
    {
        disc = 0.00;
        net = amt - (disc * amt) / 100;
    }

    else if (amt >= 25001 && amt <= 57000)
    {
        disc = 5.00;
        net = amt - (disc * amt) / 100;
    }

    else if (amt >= 57001 && amt <= 100000)
    {
        disc = 7.5;
        net = amt - (disc * amt) / 100;
    }
    else
    {
        disc = 10.00;
        net = amt - (disc * amt) / 100;
    }

    cout <<"net price after discount is :"<<net;
}

void pc(float amt)
{
    float disc = 0.00, net = 0.00;
    if (amt >= 0 && amt <= 25000)
    {
        disc = 5.00;
        net = amt - (disc * amt) / 100;
    }

    else if (amt >= 25001 && amt <= 57000)
    {
        disc = 7.600;
        net = amt - (disc * amt) / 100;
    }

    else if (amt >= 57001 && amt <= 100000)
    {
        disc = 10;
        net = amt - (disc * amt) / 100;
    }

    else
    {
        disc = 15.00;
        net = amt - (disc * amt) / 100;
    }

    cout << "net price after discount is : "<<net;
}
int main()
{
    float amt, net;
    int choice;
    do
    {
        cout << "\n\n\nenter your choice like \n 1 for laptop price \n 2. pc \n 3 for input and print details of customer\n ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter amt";
            cin >> amt;
            laptop(amt);
            break;
        case 2:
            cout << "enter amt";
            cin >> amt;
            pc(amt);
            break;

        case 3:
            cust_details();
            break;

        default:
            cout << "wrong choice\n";
        }
    } while (choice<=3);
}
