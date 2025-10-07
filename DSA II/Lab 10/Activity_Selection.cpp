#include<bits/stdc++.h>
using namespace std;

struct Activity{
    string name;
    int startTime, endTIme;
    Activity(string s, int stime, int e){
        name = s;
        startTime = stime;
        endTIme = e;
    }
};
bool comparator(Activity a, Activity b){
    return a.endTIme<b.endTIme;
}

void ActivitySelection(vector<Activity> activityVector){
    sort(activityVector.begin(), activityVector.end(), comparator);

    // cout<<"Vector after sorting "<<endl;
    // for(Activity x : activityVector){
    //     cout<<"( "<<x.name<<", "<<x.startTime<<", "<<x.endTIme<<") "<<endl;
    // }
    vector<Activity> selectedActivity;
    int k = 0;
    selectedActivity.push_back(activityVector[k]);
    for(int i = 1; i<activityVector.size(); i++){
        if(activityVector[i].startTime<activityVector[k].endTIme){}
        else{
            k = i;
            selectedActivity.push_back(activityVector[k]);
        }
    }

    cout<<"Selected activities: "<<endl;
    for(Activity x : activityVector){
        cout<<"( "<<x.name<<", "<<x.startTime<<", "<<x.endTIme<<") "<<endl;
    }
}

int main(){
    int n; cin>>n;
    vector<Activity> activityVector;
    for(int i = 0; i<n; i++){
        string name; 
        int startTIme, endTime;
        cin>>name>>startTIme>>endTime;
        Activity a(name, startTIme, endTime);
        activityVector.push_back(a);
    }
}