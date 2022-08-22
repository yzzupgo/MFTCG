#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,n,m) for(int i=n; i<m ;i++)
#define SIZE(x) ((ll)(x).size())
#define ALL(x) (x.begin(), x.end()
typedef long double ld;
int main() {
int n;
cin>>n;
int cnt=0;
FOR(i,1,n+1){
if(((int)floor(log10(i))+1)%2!=0){
cnt++;
}
}
cout<<cnt<<endl;
return 0;
}
