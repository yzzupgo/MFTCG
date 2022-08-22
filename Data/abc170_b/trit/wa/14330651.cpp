#define lp(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
#include<bits/stdc++.h>
int main(){
int x,y;
bool f=false;
cin>>x>>y;
for(int i=1;i<=x;++i){
for(int j=0;i+j<=x;++j){
if(2*i+4*j==y)
if(i+j==x){
f=true;
break;
}
}
if(f)
break;
}
cout<<((f)?"Yes":"No")<<endl;
}
