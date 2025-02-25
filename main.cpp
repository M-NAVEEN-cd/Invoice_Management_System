#include<bits/stdc++.h>
#include "invoice.cpp"
using namespace std;

class customer:private invoice
{
    private:
    vector<int>customer_details;
    public:
    
    customer()
    {
        id++;
        customer_details.push_back(id);
    }
    void showCustomers()
    {
        for(int i=0;i<customer_details.size();i++)
        {
            cout<<customer_details[i]<<endl;
        }
    }
    void showDetails()
    {
        cout<<"Customer Details"<<endl;
    }
};

void display()
{
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
        switch(choice)
        {
            case 1:
            {
                customer c;
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
                customer c;
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