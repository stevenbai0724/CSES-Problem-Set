//https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for(int i=1;i<=n;i++){
        count+=abs(arr[i]-arr[n/2]);
    }
    cout<<count;


    return 0;
}