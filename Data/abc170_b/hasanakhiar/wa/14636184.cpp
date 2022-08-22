#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b, p=0; cin>>a>>b;
for(int i=1; i<=b; i++){
if(2*i + 4*(a-i) == b) {
cout<<"YES\n"; p=1;
}
}
if(p==0) cout<<"NO\n";
return 0;
}
