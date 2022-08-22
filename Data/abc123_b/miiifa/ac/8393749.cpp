#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF= 1LL << 60;
#define REP(i,n) for(ll i=0; i<n; i++)
#define FOR(i,a,n) for(ll i=a; i<n; i++)
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int A[5];
    int t= -1;
    int min= 9;
    REP(i,5){
        cin >> A[i];
        if(min>=A[i]%10 && A[i]%10!=0){
            t= i;
            min= A[i]%10;
        } 
    }
    int sum= 0;
    REP(i,5){
        if(i==t) continue;
        sum+= A[i]+((A[i]%10)?(10-A[i]%10):0);
    }
    if(t!=-1) sum+= A[t];
    cout << sum << endl;
}
