#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define rrep(i,a,b) for(int i = a ; i < b ; i++)
int n , l ;
int main(){
cin >> n >> l ;
int apple = 0 ;
rrep(i,l,l+n) apple += i ;
int ans = 1e8 , val = -1 ;
rrep(i,l,l+n){
int res = 0 ;
rrep(j,l,l+n){
if(i == j) continue ;
res += j ;
}
if(ans > abs(apple-res)){
ans = abs(apple-res) ;
val = res ;
} ;
}
cout << val << endl ;
}
