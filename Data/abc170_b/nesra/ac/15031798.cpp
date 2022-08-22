#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<i64> vi;
typedef pair<i64,i64>ii;
typedef vector<ii> vii;
typedef map<i64,i64> mi;
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define MOD 1000000007
#define ff first
#define ss second
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("error.txt", "w", stderr);
#endif
fastio();
clock_t beg=clock();
i64 t=1;
while(t--){
int n,l;
cin>>n>>l;
l-=(2*n);
if(l<0){
cout<<"No";
continue;
}
if(l%2==0 && l/2<=n){
cout<<"Yes";
}
else cout<<"No";
}
clock_t end=clock();
fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
return 0;
}
