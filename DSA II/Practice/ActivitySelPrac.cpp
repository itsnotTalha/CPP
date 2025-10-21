#include<bits/stdc++.h>
using namespace std;

struct Activity
{
    int st, ed;
    string name;
    Activity(string n, int s, int e){
        name = n; 
        st = s;
        ed = e;
    }
};
bool compare(Activity a, Activity b){
    return a.ed<b.ed;
}

void SelectedActivity(vector<Activity>acts){
    int n = acts.size();
    sort(acts.begin(), acts.end(), compare);
    vector<Activity>selected_activity;
    int k = 0;
    selected_activity.push_back(acts[k]);
    for(int i = 1; i<n; i++){
        if(acts[i].st<acts[k].ed){

        }else{
            k = i;
            selected_activity.push_back(acts[i]);
        }
    }
    for(auto x : selected_activity){
        cout<<x.name<<" "<<x.st<<" "<<x.ed<<endl;
    }
}
int main(){
    int n; cin>>n;
    vector<Activity> acts;

    for(int i = 0; i<n; i++){
        string name;
        int start, ed;
        cin>>name>>start>>ed;
        acts.push_back(Activity(name, start, ed));
    }
    SelectedActivity(acts);
}