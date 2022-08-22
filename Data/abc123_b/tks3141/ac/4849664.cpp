#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999999
#define MOD 1000000007
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> LV;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};



int main() {
	LV men(5);
    int sum=0;
    int m=10;
    REP(i,5){
        cin >> men[i];
    }
    REP(i,5){
        int a=(men[i]%10);
        m=min(m,(a==0?10:a));
    }
    REP(i,5){
        int b=men[i]%10;
        int a=men[i]/10;
        sum+=a*10+(b>0?10:0);
    }
    // string S;
    // cin >> S;
    cout << sum-10+m << endl;





}
