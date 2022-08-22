#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define sll set<long long>
#define si set<int>
#define stk stack<int>
#define que queue<int>
#define pb push_back
#define ff first
#define ss second
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
int x,y;
cin>>x>>y;
int b=0;
if(x==1&&(y==2||y==4))
b=1;
for(int i=1;i<x;i++){
if(i*2+(x-i)*4==y||i*y+(x-i)*2==y){
b=i;
break;
}
}
if(b==0)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
int main(){
IOS;
int q=1;
while(q--){
solve();
}
}
