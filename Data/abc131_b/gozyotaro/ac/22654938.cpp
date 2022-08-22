#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_N (ll)2e5
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define syosu setprecision(10)
#define a_z "abcdefghijklmnopqrstuvwxyz"
#define A_Z "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
int n , L ;
int main(){
cin >> n >> L ;
int real = 0 ;
for(int i = 0 ; i < n ; i++){
real += L + i ;
}
int magin = INT_MAX ;
int ans = INT_MAX ;
for(int i = 0 ; i < n ; i++){
int val = abs(L + i) ;
if(magin > val){
magin = abs(val) ;
ans = real - (L + i) ;
}
}
cout << ans << endl ;
}
