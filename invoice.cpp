#pragma once
#include<bits/stdc++.h>

using namespace std;
class invoice
{
    public:
    static int sno;
    static unordered_map<int,invoice>mp;
    private:
    vector<int>invoice_details;
    int id;
    public:
    invoice(){}
    
    void add_item(int item_id,int quantity,int price)
    {
        this->id=id;
        invoice_details.push_back(item_id);
    }
    void showDetails()
    {
        
    }
};
int invoice::sno=0;
unordered_map<int,invoice>invoice::mp;
