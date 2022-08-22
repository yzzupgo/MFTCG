#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rrep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"
int n ;
int main(){
cin >> n ;
int res = 0 ;
rrep(i,1,n+1){
string s = to_string(i) ;
if(s.size() % 2 == 1) res++ ;
}
cout << res << endl ;
}
