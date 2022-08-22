#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define FOR(i, m, n) for (int i = (m); i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i >= (n); i--)
#define REP(i, n) FOR(i, 0, (n))
#define REPR(i, n) FORR(i, (n) - 1, 0)
#define REP1(i, n) FOR(i, 1, (n) + 1)



int main(void){
    vector<int> n(5);
    int t,ans=700;
    
    REP(i,5){
        cin >> n[i];
    }

    sort(n.begin(),n.end());

    do{
        t = 0;
        REP(i,5){
            t += n[i];
            if(t % 10 != 0 && i != 4){
                t += 10 - (t % 10);
            }
        }
        ans = min(ans,t);
    }while(next_permutation(n.begin(),n.end()));

    cout << ans << endl;
}