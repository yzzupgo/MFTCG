#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b, p=0; cin>>a>>b;
for(int i=1; i<=b; i++){
if(2*i + 4*(a-i) == b) {
cout<<"Yes\n"; p=1;
}
}
if(p==0) cout<<"No\n";
return 0;
}
