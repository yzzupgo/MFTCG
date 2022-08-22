#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define REP(i,x) for(int i=0;i<(int)(x);i++)
#define REPS(i,x) for(int i=1;i<=(int)(x);i++)
#define RREP(i,x) for(int i=((int)(x)-1);i>=0;i--)
#define RREPS(i,x) for(int i=((int)(x));i>0;i--)
const ll mod = 1e9 + 7;
typedef pair<int,int>           PI;
typedef pair<ll,ll>             PL;
typedef vector<PI>               vip; 
typedef vector<int>             vi;
typedef vector<vi>              vvi;






int main (){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vi a(5);
    REP(i,5){
        cin >> a[i];
    }
    int last = 9;
    int index;
    REP(i,5){
        if(a[i] % 10 != 0){
            int s = a[i] % 10;
            last = min(last,s);
            a[i] -= s;
            a[i] += 10;
        }

    }
    int total = 0;
    REP(i,5){
        total += a[i];

    }
    total = total - 10 + last;

    cout << total << endl;


    return 0;
}