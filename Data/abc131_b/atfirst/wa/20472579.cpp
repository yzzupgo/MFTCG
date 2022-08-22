#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repp(i,l,n) for (int i = (l); i < (int)(n); i++)
using ll = long long;
int main(){
int n,l; cin >> n >> l;
int m;
int r=l+n-1;
if(l>=0){
m=l;
}else if(r>=0){
m=0;
}else{
m=r;
}
cout << (2*l+n-1)/2*n-m << endl;
cout << m << endl;
}
