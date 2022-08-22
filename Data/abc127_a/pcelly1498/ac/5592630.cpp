#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define PB push_back
#define ff first
#define ss second
#define MOD 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll a,b;
cin>>a>>b;
if(a<=5) cout<<0;
else if(a<13) cout<<b/2;
else cout<<b;
return 0;
}
