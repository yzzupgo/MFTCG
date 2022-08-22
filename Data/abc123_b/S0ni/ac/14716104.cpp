#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <sstream>
#include <numeric>
#include <cctype>
#include <bitset>
#include <cassert>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define SIZE 100005
#define INF 1000000000000000LL
using pint = pair<int,int>;
using vec = vector<int>;
using ll=long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vec a(5);
    for(int i=0; i<5; i++) cin>>a[i];
    auto b=a;
    auto c=a;
    int mn=9,cnt=0;
    rep(i,5){
        a[i] = a[i]%10;
        if(a[i]==0) cnt++;
    }
    rep(i,5){
        if(a[i]%10!=0)b[i] += (10 - a[i]);
        if(min(mn,a[i]) != 0) mn=min(mn,a[i]);
    }

    int sum=0;
    rep(i,5) sum +=b[i];
    if(cnt==5){
        sum=sum;
    }else{
        sum = sum - 10 + mn;

    }
    cout<<sum<<endl; 
}