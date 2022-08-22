#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
fasino
int x,y;
cin>>x>>y;
if(y&1){
cout<<"No";
return 0;
}
else{
if(x*4<y or x*2>y){
cout<<"No\n";
return 0;
}
else{
if(y%4==0 or y%4==2){
cout<<"Yes";
}
else if(y%2==0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
}
return 0;
}
