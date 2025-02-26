#include<bits/stdc++.h>
#include "invoice.cpp"
using namespace std;

class customer
{
    private:
    static int id;
    int cid;
    string customer_name;
    static vector<customer>customer_details;
    public:
    
    customer()
    {

    }
    customer(string name)
    {
        this->cid=id++;   
        this->customer_name=name;
        customer_details.push_back(*this);
    }

    void showCustomers()
    {
        for(int i=0;i<customer_details.size();i++)
        {
            cout<<"CUSTOMER ID: "<<customer_details[i].cid<<endl;
            cout<<"CUSTOMER NAME: "<<customer_details[i].customer_name<<endl;
        }
    }
};

int customer::id=1;
vector<customer> customer::customer_details;

void display()
{
    customer c;
    bool flag=1;
    while(flag)
    {
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"|                INVENTORY MANAGEMENT SYSTEM                 |"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        int choice;
        cout<<"1.Add a Customer"<<endl;
        cout<<"2.Add an Invoice"<<endl;
        cout<<"3.Add items to an invoice"<<endl;
        cout<<"4.List all customers"<<endl;
        cout<<"5.List all invoices"<<endl;
        cout<<"6.List all invoices of a customer"<<endl;
        cout<<"7.Display the full details of an invoice"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"ENTER THE CHOICE : ";
        cin>>choice;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        switch(choice)
        {
            case 1:
            {
                string s;
                cout<<"ENTER THE CUSTOMER NAME: ";
                cin>>s;
                customer c(s);
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                c.showCustomers();
                break;
            }
            case 5:
            {
                break;
                //fnjf
            }
            case 6:
            {
                break;
            }
            case 7:
            {
                flag=0;
                break;
            }
        }
    }
}

int main()
{
    display();
}