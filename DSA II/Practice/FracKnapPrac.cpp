#include<bits/stdc++.h>
using namespace std;

struct Item
{
    float price, weight, unitP, portionTaken;
    string name;
    Item(string n, float p, float w){
        name = n;
        price = p;
        weight = w;
        unitP = p/w;
    }
};

bool compare(Item a, Item b){
    return a.unitP>b.unitP;
}

void Fracknap(vector<Item> items, int C){
    sort(items.begin(), items.end(), compare);
    vector<Item> selected_items;
    float profit = 0;
    int k = 0;
    while(C>0 and k<items.size()){
        if(C>=items[k].weight){
            profit+=items[k].price;
            C-=items[k].weight;
            items[k].portionTaken = 1;
            selected_items.push_back(items[k]);
        }else{
            profit = profit+(C*items[k].unitP);
            items[k].portionTaken = C/items[k].weight;
            selected_items.push_back(items[k]);
            C = 0;
        }
        k++;
    }

       cout<<"______Chosen Items_______"<<endl;
    for(auto &item : selected_items){
        cout<<"(name="<<item.name<<",price="<<item.price<<",weight="<<item.weight<<",portion taken="<<item.portionTaken<<endl;
    }
    cout<<"Total Profit : "<<profit<<endl;
}

int main(){
    int n, C; cin>>n>>C;
    vector<Item> items;
    for(int i = 0; i<n; i++){
        string name;
        float weight, price;
        cin>>name>>price>>weight;
        items.push_back(Item(name, price, weight));
    }
    Fracknap(items, C);
}