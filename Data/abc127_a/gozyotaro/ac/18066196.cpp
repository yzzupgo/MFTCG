#include <bits/stdc++.h>
using namespace std ;
using V_2 = vector<vector<int>> ;
using ll = long long ;
#define M 100005
int n , k ;
int main(){
cin >> n >> k ;
if(n >= 13) cout << k << endl ;
else if(n >= 6) cout << k / 2 << endl ;
else cout << 0 << endl ;
}
