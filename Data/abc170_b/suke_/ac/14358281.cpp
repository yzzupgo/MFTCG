#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
bool a=false;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if((4*i+2*(x-i))==y) a=true;
}
}
if(a) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
