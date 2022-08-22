#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define repp(i,l,n) for (int i = (l); i < (int)(n); i++)
using ll = long long;
int main(){
int n,l;
cin >> n >> l;
int sum = 0;
if(l+n-1<0){
sum -= l+n-1;
}else if(l>0){
sum -= l;
}
sum += (2*l+n-1)*n/2;
cout << sum << endl;
}
