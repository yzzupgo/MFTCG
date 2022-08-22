#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int MOD=1e9+7;
#ifndef HOME
#define cerr if(0)cerr
#endif

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[5],k;
    int idx=-1;
    int b=INT_MAX;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]%10!=0){
            int x=a[i]%10;
            if(x<b){
                b=x;
                idx=i;
            }
        }
    }
    int c=0;
    for(int i=0;i<5;i++){
        if(a[i]%10==0){
            c+=a[i];
            a[i]=-1;
        }
    }
    for(int i=0;i<5;i++){
        if(a[i]!=-1&&i!=idx){
            c=c+a[i]+10-(a[i]%10);
        }
    }
    if(idx==-1){
        cout<<c<<endl;
    }
    cout<<c+a[idx]<<endl;
    
    return 0;
    
}

