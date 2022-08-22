#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define repp(i, s, n) for(int i = (int)s; i < (int)n; i++)
#define repm(i, s, n) for(int i = (int)s; i > (int)n; i--)
#define ALL(a) (a).begin(), (a).end()
#define Yes() cout << "Yes" << endl;
#define No() cout << "No" << endl;
using ll = long long;
typedef pair<int, int> P;
const ll mod = 998244353;
template<class T> bool chmin(T &a, T b){
    if (a > b){
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmax(T& a, T b){
    if (a < b){
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1e18;
//const int INF = 1e9;

int func(int n){
    if(n%2 == 0)return n/2;
    else return 3*n+1;
}

int main(void){
    int n = 5, l = 10, f;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        if(a[i]%10 > 0 && a[i]%10 < l){
            f = a[i];
            l = a[i]%10;
        }
    }
    int ans = f;
    bool first = false;
    rep(i,n){
        if(a[i] == f){
            if(first)ans += (a[i]/10 + 1 - (a[i]%10  == 0 ? 1:0))*10;
            else first = true;
        }
        else ans += (a[i]/10 + 1 - (a[i]%10  == 0 ? 1:0))*10;
    }
    
    cout << ans << endl;
}