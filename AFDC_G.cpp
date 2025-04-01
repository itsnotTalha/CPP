#include<bits/stdc++.h>
using namespace std;
const double PI = 3.141592653589793;

int main(){
    cout << fixed << setprecision(15);
    int n, k;
    cin>>n>>k;
    vector<double> a(n);
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        double d = sqrt(pow(x,2)+pow(y,2));
        a[i]=d;
    }
    sort(a.begin(), a.end());
    int m = 0;
    while((PI*m*m)<a[k-1]){
        m++;
    }
    cout<<(PI*m*m)<<endl;
}