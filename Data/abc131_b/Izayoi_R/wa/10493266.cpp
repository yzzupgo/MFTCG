#include<iostream>
using namespace std ;
int main(){
int n,l ;
cin >> n >> l ;
int mn = 10000000 ;
for(int i=1;i<=n;i++){
int sub = l+i-1 ;
if(sub<0) sub *= -1 ;
if(mn>sub) mn = sub ;
}
cout << n*l+n*(n-1)/2-mn << endl ;
}
