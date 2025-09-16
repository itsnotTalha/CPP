#include<bits/stdc++.h>
using namespace std;

class Answer{
    public:
    int val, l, r;
};

Answer CrossSum(vector<int>&A, int mid, int l, int r){
    int lsum = 0, lmax = INT_MIN, lmin = -1;
    for(auto i = mid; i>=l; i--){
        lsum+=A[i];
        if(lsum>=lmax){
            lmax = lsum;
            lmin = i;
        }
    }
    int rsum = 0, rmax = INT_MIN, rmin = -1;
    for(auto i = mid+1; i<=r; i++){
        rsum+=A[i];
        if(rsum>=rmax){
            rmax = rsum;
            rmin = i;
        }
    }
    Answer ans;
    ans.val = lmax+rmax;
    ans.l = lmin;
    ans.r = rmin;
    return ans;
}

Answer FindMax(vector<int> &A, int l, int r){
    if(l==r){
        Answer ans;
        ans.val = A[l];
        ans.l = ans.r = l;
        return ans;
    }
    int mid = (l+r)/2;
    Answer left = FindMax(A, l, mid);
    Answer right = FindMax(A, mid+1, r);
    Answer cross = CrossSum(A, mid, l, r);
    if(left.val>=right.val and left.val>=cross.val) return left;
    else if(cross.val>=left.val and cross.val>=right.val) return cross;
    else return right;
}

int main(){
    int n; cin>>n;
    vector<int> A(n);
    for(auto i=0; i<n; i++) cin>>A[i];
    Answer ans = FindMax(A, 0, A.size()-1);
    cout<<ans.val<<endl;
    for(int i = ans.l; i<=ans.r; i++)cout<<A[i]<<' ';
}