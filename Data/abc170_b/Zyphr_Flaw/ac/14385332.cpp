#include <bits/stdc++.h>
#define IOS \
ios_base::sync_with_stdio(0); \
cin.tie(0);
typedef long long ll;
using namespace std;
int main(){
IOS;
int x,y;
cin>>x>>y;
if(x>=y){
cout<<"No\n";
return 0;
}
if(x<=(y/2)&&(y%2)==0&&y<=(x*4))
cout<<"Yes\n";
else
cout<<"No\n";
}
