/*
https://cses.fi/problemset/task/1629

-sort in increasing order by the ending time

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int n; cin>>n;
    vector<pair<int, int>>arr(n+1);

    for(int i=1;i<=n;i++){
        cin>>arr[i].second>>arr[i].first;
    }
    sort(arr.begin(), arr.end());
    int cur = 0;
    int count = 0;

    for(int i=1;i<=n;i++){
        if(arr[i].second>=cur){
            count++;
            cur = arr[i].first;
        }
    }
    cout<<count;
    

    return 0;
}