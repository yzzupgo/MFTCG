#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=a-1;i>=n;i--)
#define db(x) cout << #x << " = " << x << endl
#define db2(x,y) cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")\n";
#define INF 1000000000000
#define MOD 998244353
int main() {
int a,b;
cin >>a>>b;
if(a>12){
cout<<b;
}else if(a>4){
cout<<b/2;
}else{
cout<<0;
}
return 0;
}
