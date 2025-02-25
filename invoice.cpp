#pragma once
#include<bits/stdc++.h>

using namespace std;
class invoice
{
    public:
    static int invoice_id;
    private:
    vector<int>invoice_details;
    public:
    invoice(){}
    
    void add_item(int item_id,int quantity,int price)
    {

    }
    void showDetails()
    {
        
    }
};
int invoice::invoice_id=0;
