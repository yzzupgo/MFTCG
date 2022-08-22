#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(s,i, n) for (int i = (int)s; i < (int)(n); i++)
#define pb push_back
typedef long long ll;

int main(){
    int a[5];
    rep(i,5){cin>>a[i];}
    int min=10;
    int min_i=0;
    rep(i,5){
        if(min>a[i]%10 &&a[i]%10!=0){
            min=a[i]%10;
            min_i=i;
        }
    }
    int ans=0;
    rep(i,5){
        if(i==min_i){
            ans+=a[i];
        }else{
            ans+=((a[i]+9)/10)*10;
        }
    }
    cout<<ans<<endl;
    return 0;
}