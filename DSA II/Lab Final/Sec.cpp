#include<bits/stdc++.h>
using namespace std;

struct Item{
    string name;
    float price, sugar, volume, unitS, unitP, portionTaken;
    Item(string n, float s, float p, float vol){
        name = n;
        sugar = s;
        price = p;
        volume = vol;
        unitS = s/vol;
        unitP = p/vol;
    }
};

bool comparator(Item a, Item b){
    return a.unitS<b.unitS;
}

void Fracknap(vector<Item> items, int C){
    sort(items.begin(), items.end(), comparator);
    vector<Item>selected;

    float profit = 0;
    int k = 0;

    while(C>0 and k<items.size()){
        if(C>=items[k].volume){
            profit+=items[k].price;
            C-=items[k].volume;
            items[k].portionTaken = 1;
            selected.push_back(items[k]);
        }else{
            profit = profit +(C*items[k].unitP);
            items[k].portionTaken = C/items[k].volume;
            selected.push_back(items[k]);
            C = 0;
        }
        k++;
    }
    cout<<"Selected items and portion: "<<endl;
    for(auto x : selected){
        cout<<x.name<<" "<<x.portionTaken;
        cout<<endl;
    }
    cout<<"\nPrice:"<<profit;
}

int main(){
    int n, C;
    cin>>n>>C;
    vector<Item> items;
    for(int i = 0; i<n; i++){
        string name;
        float sugar, vol, price;
        cin>>name>>sugar>>vol>>price;
        items.push_back(Item(name,sugar,price, vol));
    }
    Fracknap(items, C);
}

/*
5 7
Orange 6 2 200
Mango 7 3 300
Pineapple 3 3 300
Apple 2 3 250
Guava 1 3 180

*/
