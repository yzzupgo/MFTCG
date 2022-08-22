#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
typedef long long ll;
int main(){
bool t=false;
int x,y; cin>>x>>y;
rep(i,x+1){
if(y==i*2+y*(x-i)) t=true;
}
if(t) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
