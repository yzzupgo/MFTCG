#include <bits/stdc++.h>
#define rep(i,x,n) for(int (i)=(x);(i)<(n);(i)++)
using namespace std;
int p(int x,int y);
int main(){
int n;
cin >> n;
vector<int>keta;
int a=n;
while(a != 0){
keta.push_back(a%10);
a/=10;
}
int ans=0;
if(keta.size()==1)ans+=n;
else{
ans+=9;
if(keta.size()==2);
else if(keta.size()==3)ans+=n-99;
else{
ans+=900;
if(keta.size()==5)ans+=n;
else if(keta.size()==6)ans+=90000;
}
}
cout << ans << endl;
return 0;
}
