#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<utility>
#include<queue>
 
#define rep(i,x) for(int i=0;i<(int)(x);i++)
#define reps(i,x) for(int i=1;i<=(int)(x);i++)
#define rrep(i,x) for(int i=((int)(x)-1);i>=0;i--)
#define rreps(i,x) for(int i=((int)(x));i>0;i--)
 
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define INF 2e9
#define MOD 1000000007
 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;
typedef std::pair<ll, ll> P;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
 
 
using namespace std;
 
int main()
{
    int r[5];
    vector<int> s;
    ll t = 0;
 
    int m = 20;
    int p;
    rep(i, 5){
        int b;
        cin >> b;
        r[i] = b;
        if((b % 10)<m && (b % 10 != 0)){
            p = b;
            m = b % 10;
        }
    }
    int flag = 0;
    rep(i, 5){
        if((r[i] == p) && flag == 0){
            flag = 1;
            continue;
        }
        else{
            s.push_back(r[i]);
 
        }
    }
 
    rep(i, 4){
        if(t % 10 == 0) t += s[i];
        else{
            t += (10 - (t % 10));
            t += s[i];
        }
    }
    if (t % 10 != 0) t += (10 - (t%10));
    t += p;
    cout << t;
}