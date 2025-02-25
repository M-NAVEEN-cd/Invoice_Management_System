#pragma once
#include<bits/stdc++.h>

using namespace std;
class invoice
{
    public:
    static int id;
    private:
    vector<int>invoice_details;
    public:
    invoice(){}
    
    virtual void showDetails()
    {
        
    }
};
int invoice::id=0;
