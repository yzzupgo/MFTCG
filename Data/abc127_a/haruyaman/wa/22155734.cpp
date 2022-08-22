#include <bits/stdc++.h>
#define rep3(i,s,n,a) for (int i = (s); i < (int)(n); i += a)
#define rep2(i,s,n) rep3(i, s, n, 1)
#define rep(i,n) rep2(i, 0, n)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
int main(){
int a, b;
cin >> a >> b;
if(a >= 13){
cout << b << endl;
}else{
if(a == 0){
cout << 0 << endl;
}else{
cout << b/2 << endl;
}
}
return 0;
}
