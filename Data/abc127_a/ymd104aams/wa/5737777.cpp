#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string.h>
#include <tuple>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
void solve(){
int a, b;
cin >> a >> b;
if(6 <= a <= 12) b /= 2;
if(a <= 5) b = 0;
cout << b << endl;
}
int main(){
solve();
return 0;
}
