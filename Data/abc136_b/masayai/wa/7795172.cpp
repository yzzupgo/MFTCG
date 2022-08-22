#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<pair<int, int>> vpi;
typedef vector<tuple<int, int, int>> vti;
int main() {
ios::sync_with_stdio(0); cin.tie(0);
int a, i;
cin >> a;
int res = 0;
for (i=1;i<8;i++){
if (i % 2 == 1){
int s = pow(10, i);
if (s <= a){
res += s - pow(10, i-1);
}else{
res += a - pow(10, i-1) + 1;
break;
}
}
}
cout << res << endl;
}
