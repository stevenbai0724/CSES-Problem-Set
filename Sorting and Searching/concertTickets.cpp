#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);


    int n, m;
    cin>>n>>m;  
    vector<int>tik(n+2);
    vector<int>cus(m+1);

    for(int i=1;i<=n;i++){
        cin>>tik[i];
    }
    for(int i=1;i<=m;i++){
        cin>>cus[i];
    }
    tik[n+1] = 1e18;
    sort(tik.begin(), tik.end());

    for(int i =1;i<=m;i++){
        int c = cus[i];
        int l = 0;
        int r = tik.size()+1;

        while(l+1<r){
            int m = (l+r)/2;

            if(tik[m]<=c) l = m;
            else r = m;

        }
        if(l ==0){
            cout<<-1<<"\n";
            continue;
        }
        if(l>=tik.size()){
            cout<<tik[tik.size()]<<"\n";
            tik.erase(tik.begin()+tik.size());
        }
        else{
            cout<<tik[l]<<"\n";
            tik.erase(tik.begin()+l);
        }
       
    }



    return 0;
}