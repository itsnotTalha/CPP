#include<bits/stdc++.h>
using namespace std;
pair<int,int> countUngaBunga(vector<char> &arr, int l, int r)
{
    if(l==r)
    {
        if (isupper(arr[l])) return {1,0};
        else if(islower(arr[l])) return {0,1};
        else return {0,0};
    }
    int mid = (l+r)/2;
    pair<int,int> p1 = countUngaBunga(arr, l, mid);
    pair<int,int> p2 = countUngaBunga(arr,mid+1,r);
    return {(p1.first+p2.first), (p1.second+p2.second)};
}
int main()
{
    int n;
    cin>>n;
    vector<char>arr;
    for(int i = 0; i<n; i++)
    {
        char c;
        cin>>c;
        arr.push_back(c);
    }
    pair<int,int> ans = countUngaBunga(arr, 0, n);
    cout<<"Number Of Uppercase Letters:"<<ans.first<<endl;
    cout<<"Number Of Lowercase Letters:"<<ans.second<<endl;
}

