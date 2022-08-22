#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<char> S;
int digit(int n){
int i=0;
while(n>0){
n/=10;
i++;
}
return i;
}
int main(){
int n;
cin>>n;
int k=digit(n);
int o=0;
if(n==1) cout<<n<<endl;
else if(k==2) {
cout<<9<<endl;
}
else if(k==3){
cout<<9+n-100+1<<endl;
}
else if(k==4){
cout<<909<<endl;
}
else if(k==5){
cout<<909+n-10000+1<<endl;
}
else cout<<"90909"<<endl;
return 0;
}
