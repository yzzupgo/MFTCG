#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(s,i,n) for (int i = (int)s; i < (int)(n); i++)
#define pb push_back
typedef long long ll;
int main(){
int a,b;
cin>>a>>b;
int ans=0;
if(a>=13)ans=b;
else if(a>=6)ans=b/2;
cout<<ans<<endl;
return 0;
}
