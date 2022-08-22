#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>
#include <iomanip>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
const int INF = 1e6;
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uld = unsigned long long;
using P = pair<int,int>;
const ll mod = 1e9+7;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
template<class T> inline bool chmax(T &a,T& b){if(a < b){a = b; return true;} else return false;}
template<class T> inline bool chmin(T &a,T& b){if(a > b){a = b; return true;} else return false;}
int main(){
    int sum=0,gosa=0;
    rep(i,5){
        int p;
        cin >> p;
        sum += (p+9)/10 * 10;
        if(p%10==0) continue;
        gosa = max(gosa,10-p%10);
    }
    cout << sum - gosa << endl;
}