#include <algorithm>
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define rep(i,n) for (int i = 0; i <(int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
const ll MOD=1000000007;
int main(){
ll x,y;cin >> x >> y;
ll sum=x*4-y;
if(sum%2==0&&sum>=0)cout <<"Yes"<< endl;
else cout <<"No"<< endl;
}
