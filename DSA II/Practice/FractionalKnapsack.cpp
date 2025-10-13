#include<bits/stdc++.h>
using namespace std;

struct Item{
    string name;
    float price, weight, priceByWeight, portionTaken;
    Item(string name, float p, float w){
        this->name=name;
        price = p;
        weight = w;
        priceByWeight = p/w;
    }
};

bool comparator(Item a, Item b){
    return a.priceByWeight>b.priceByWeight;
}

void FracKnap(vector<Item> items, int C){
    sort(items.begin(), items.end(), comparator);

    vector<Item>choosenItem;

    float profit = 0;
    int k = 0;

    while(C>0 and k<items.size()){
        if(C>=items[k].weight){
            profit+=items[k].price;
            C-=items[k].weight;
            items[k].portionTaken = 1;
            choosenItem.push_back(items[k]);
        }else{
            profit+= C*items[k].priceByWeight;
            items[k].portionTaken = (float)C/items[k].weight;
            choosenItem.push_back(items[k]);
            C = 0;
        }
        k++;
    }

    cout<<"______Chosen Items_______"<<endl;
    for(auto &item : choosenItem){
        cout<<"(name="<<item.name<<",price="<<item.price<<",weight="<<item.weight<<",portion taken="<<item.portionTaken<<endl;
    }
    cout<<"Total Profit : "<<profit<<endl;
}


int main(){
    int n, C; cin>>n>>C;
    //took item count and Cap from user
    vector<Item> items;
    for(int i = 0; i<n; i++){
        string name; cin>>name;
        float price,weight;
        cin>>price>>weight;
        Item itm(name,price,weight);
        items.push_back(itm);
    }
    FracKnap(items, C);
}