#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int n,l;
long double x,y;
cin>>n>>l;
x=(4*n-l)/2;
y=(l-2*n)/2;
if((x>=0)&&(y>=0)&&(int(x)==x)&&(int(y)==y)){cout<<"Yes";}
else{cout<<"No";};
return 0;
}
