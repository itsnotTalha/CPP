#include<bits/stdc++.h>
using namespace std;

struct Activity{
    string name;
    int startTime, endTime;
    Activity(string name, int s, int e){
        this->name = name;
        startTime = s;
        endTime = e;
    }
};

bool comparator(Activity a, Activity b){
    return a.endTime<b.endTime;
}

void ActivitySelection(vector<Activity> &events){
    sort(events.begin(), events.end(), comparator);

    vector<Activity> selectedActivity;

    int k = 0;
    selectedActivity.push_back(events[k]);
    for(int i = 1; i<events.size(); i++){
        if(events[i].startTime<events[k].endTime){
            //do nothing
        }else{
            k = i;
            selectedActivity.push_back(events[k]);
        }
    }
    cout<<"Selected activities:"<<endl;
    for(Activity a:selectedActivity){
        cout<<"("<<a.name<<","<<a.startTime<<","<<a.endTime<<")"<<endl;
    }
}

int main(){
    int n;cin>>n;
    //Taking input of activity count

    vector<Activity> events;
    for(int i = 0; i<n; i++){
        string name;
        int start, end;
        cin>>name>>start>>end;
        Activity act(name, start, end);
        events.push_back(act);
    }

    for(Activity a : events){
        cout<<"("<<a.name<<","<<a.startTime<<","<<a.endTime<<")"<<endl;
    }

    ActivitySelection(events);
}