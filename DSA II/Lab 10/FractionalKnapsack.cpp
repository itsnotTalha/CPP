#include<bits/stdc++.h>
using namespace std;

struct Item{
    string name;
    double price, weight, unitPrice, portionTaken;
    Item(string name, double price, double weight){
        this->name = name;
        this->weight = weight;
        this->price = price;
        unitPrice = weight/price;
    }
};

bool comparator(Item a, Item b){
    return a.unitPrice>b.unitPrice;
}

void fractionKnapsack(vector<Item>items, int n, int C){
    sort(items.begin(), items.end(), comparator);

    vector<Item> seletedItem;
    double profit = 0;
    int i = 0;
    while(C and i<n){
        if(C>= items[i].weight){
            C-=items[i].weight;
            profit += items[i].price;
            items[i].portionTaken = 1;
            seletedItem.push_back(items[i]);
        }else{
            profit+=(C*items[i].unitPrice);
            items[i].portionTaken = C/items[i].weight;
            C = 0;
            seletedItem.push_back(items[i]);
        }
        i++;
    }
}

int main(){
    int n , C; cin>>n>>C;
    vector<Item> items;

    for(int i = 0; i<n; i++){
        string name; 
        double price , weight;
        cin>>name>>price>>weight;
        Item a(name, price, weight);
        items.push_back(a);
    }
}