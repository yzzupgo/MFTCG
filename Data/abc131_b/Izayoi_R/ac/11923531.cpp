#include <iostream>
#include <algorithm>
using namespace std ;
using ll = long long ;
int main(){
ll n,l ;
cin >> n >> l ;
l-- ;
if(l>=0) cout << (n-1)*(n+2)/2+l*(n-1) << endl ;
else if(-1*l>=n) cout << (n-1)*n/2+l*(n-1) << endl ;
else cout << n*(n+1)/2+l*n << endl ;
}
