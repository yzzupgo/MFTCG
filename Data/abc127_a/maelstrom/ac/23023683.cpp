#include<bits/stdc++.h>
#include<string>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
int main(){
int a,b;
cin>>a>>b;
if(a<6) cout<<0<<endl;
else if(a<13) cout<<b/2<<endl;
else cout<<b<<endl;
}
