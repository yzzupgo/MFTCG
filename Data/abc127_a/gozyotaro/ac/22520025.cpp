#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_N (ll)2e5
#define endl "\n"
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define syosu setprecision(10)
#define a_z "abcdefghijklmnopqrstuvwxyz"
#define A_Z "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
int a , b ;
int main(){
cin.tie(0);
ios_base::sync_with_stdio(false);
cin >> a >> b ;
if(6 <= a && a <= 12){
cout << b / 2 << endl ;
return 0 ;
}
if(a < 6){
cout << 0 << endl ;
return 0 ;
}
if(a > 12){
cout << b << endl ;
return 0 ;
}
}
