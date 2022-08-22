#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,N) for(int i = 0;i < (int)(N);i++)
int main(){
int n;
cin>>n;
int ans=9;
int x=100;
int y=900;
if(n<=9){
cout<<n<<endl;
return 0;
}
rep(i,6){
if(n/x>=10){
ans+=y;
}
if(n/x==1){
ans+=n-x+1;
}
x*=100;
y*=100;
}
cout<<ans<<endl;
}
