#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
bool ok=0;
cin>>x>>y;
for(int i=0; i<=x; i++){
ok=ok || i*2+(x-i)*4==y;
}
if(ok)
cout<<"Yes";
else
cout<<"No";
return 0;
}
