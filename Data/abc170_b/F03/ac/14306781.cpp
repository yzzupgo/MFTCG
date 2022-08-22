#include<bits/stdc++.h>
#include<iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define FOR(i,x,n) for(int i=(x);i<(n);i++)
#define FOR_R(i,x,n) for(int i=(n-1);i>=(x);i--)
#define REP(i,n) FOR(i, 0, n)
#define REP_R(i,n) FOR_R(i, 0, n)
using ll = long long;
typedef long long ll;
typedef long long int64;
typedef long long lint;
typedef long long lli;
int main(){
int X,Y;
cin >> X >> Y;
if(X>=(Y-2*X)/2 && (Y-2*X)%2==0 && Y>=2*X)cout << "Yes" << endl;
else cout << "No" << endl;
}
