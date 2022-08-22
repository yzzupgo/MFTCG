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
if((4*x-y)%2==0&&4*x-y>=0&&(4*x-y)/2<=x)cout <<"Yes"<< endl;
else cout <<"No"<< endl;
}
