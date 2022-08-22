#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <deque>
using namespace std;
using P = pair<int,int>;
typedef long long int ll;
#define rep(i,n) for (int(i) = 0; (i) < (n); (i)++)
int main(){
int n; cin >> n;
int ans = 0;
for(int i=1; i<=n; i++){
string s;
s = to_string(i);
if(s.size()%2!=0)ans++;
}
cout << ans <<endl;
return 0;
}
