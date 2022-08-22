#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
int main(){
    int a,m=10,ans=0,x=0;
    REP(i,5){
        cin>>a;
        ans+=(a/10)*10;
        if(a%10>0){ 
            x++;
            m=min(m,a%10);
        }
    }
    if(m==10){
        m=0;
        x=1;
    }
    cout<<ans+m+(x-1)*10<<endl;
}