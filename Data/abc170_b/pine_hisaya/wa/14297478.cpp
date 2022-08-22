#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(ll i=a; i<b; i++)
#define IN(a) cin>>a
#define OUT(a) cout<<a<<endl
int main(){
int x, y;
IN(x);
IN(y);
if(2*x<=y&&y<=4*x){
OUT("Yes");
}else{
OUT("No");
}
}
