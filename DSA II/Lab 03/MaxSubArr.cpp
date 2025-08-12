#include<bits/stdc++.h>
using namespace std;
class box{
public:
    int val;
    int s,e;
};

box MaxCrossSum(vector<int>& arr, int s, int mid, int e){
    int lsum = 0, lmax = -INT_MAX, lmin = -1;
    for(int i = mid; i>= s; i--){
        lsum += arr[i];
        if(lsum>lmax){
            lmax = lsum;
            lmin = i;
        }
    }
    int rsum = 0, rmax = INT_MIN, rmin = -1;
    for(int i = mid+1; i<=e; i++){
        rsum+=arr[i];
        if(rsum>rmax){
            rmax = rsum;
            rmin = i;
        }
    }
    box b;
    b.val = lmax+rmax;
    b.s = lmin;
    b.e = rmin;
    return b;
}

box MaxSubArr(vector<int>& arr, int s, int e){
    if(s==e){
        box b;
        b.val = arr[s];
        b.s = s;
        b.e = e;
        return b;
    }
    int mid = (s+e)/2;
    box lsum;
    lsum = MaxSubArr(arr, s, mid);
    box rsum;
    rsum = MaxSubArr(arr, mid+1, e);
    box csum;
    csum = MaxCrossSum(arr, s, mid, e);

    if(lsum.val>=rsum.val && lsum.val>=csum.val) return lsum;
    else if(rsum.val>=lsum.val && rsum.val>=csum.val) return rsum;
    else return csum;
}

int main(){
    vector<int> a = {1,5,4,3,-2,-7,7,8,10};
    box ans;
    ans = MaxSubArr(a, 0, a.size()-1);
    cout<<ans.val<<" "<<ans.s<<" "<<ans.e<<endl;
    return 0;
}
